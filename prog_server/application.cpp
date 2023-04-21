#include "application.h"
#include "common.h"
#include <QDebug>
#include "rationalnumber.h"
#include "complex.h"
#include "data.pb.h"

TApplication::TApplication(int argc, char *argv[])
            : QCoreApplication(argc,argv)
{
    TCommParams pars = { QHostAddress("127.0.0.1"), 10000,
                         QHostAddress("127.0.0.1"), 10001};
    comm = new TCommunicator(pars, this);

    connect(comm,SIGNAL(recieved(QByteArray)),this,SLOT(HandleRequest(QByteArray)));
}


namespace {

    void ToNumber(QString str, TRationalNumber& ans) {
        ans = TRationalNumber(str.toStdString());
    }

    void ToNumber(QString str, double& ans) {
        ans = str.toDouble();
    }

    void ToNumber(QString str, TComplex& ans) {
        ans = TComplex(str.toStdString());
    }

    QString ToQString(TRationalNumber& num) {
        return num.ToQString();
    }

    QString ToQString(double& num) {
        return QString::number(num);
    }

    QString ToQString(TComplex& num) {
        return num.ToQString();
    }

    template<class number>
    QString recieveForAll(Proto::Data& msg) {
        const auto& inputMatrix = msg.marix();
        int sizeMatrix = inputMatrix.rows_size();
        number** matrixArr = new number*[sizeMatrix];
        for (int y = 0; y < sizeMatrix; y++) {
            matrixArr[y] = new number[sizeMatrix];
            const auto& inputRow = inputMatrix.rows().Get(y);
            for (int x = 0; x < sizeMatrix; x++) {
                QString buf = QString::fromStdString(inputRow.arr().Get(x));
                // qDebug() << buf;
                number num;
                ToNumber(buf, num);
                matrixArr[y][x] = num;
            }
        }

        TSquareMatrix<number> matrix;
        matrix.EnterMatrix(matrixArr, sizeMatrix);

        for (int y = 0; y < sizeMatrix; y++) {
            delete[] matrixArr[y];
        }
        delete[] matrixArr;

        QString answer;
        int actionId = msg.action_id();
        if (actionId == EIdAction::FIND_DETRMINANT) {
            number ans = matrix.FindDeterminant();
            answer = ToQString(ans);
        }
        else if (actionId == EIdAction::FIND_RANK) {
            number ans = matrix.FindRank();
            answer = ToQString(ans);
        }
        else if (actionId == EIdAction::FIND_TRANSPOSED) {
            auto* ans = matrix.FindTransposed();
            answer = QString::fromStdString(ans->ToString());
            delete ans;
        }
        else if (actionId == EIdAction::PRINT_MATRIX) {
            answer = QString::fromStdString(matrix.ToString());
        }
        else {
            answer = "Incorrect id action!";
        }

        return answer;
    }
}


void TApplication::HandleRequest(QByteArray msgSerialize)
{
    Proto::Data msg;
    if (!msg.ParseFromString(msgSerialize.toStdString())) {
        comm->send(QByteArray().append("Error during deserialization!"));
        return;
    }
    qDebug() << msg.type_id() << " " << msg.action_id();

    QString answer;
    if (msg.type_id() == ENumberType::RATIONAL) {
        answer = recieveForAll<TRationalNumber>(msg);
    }
    else if (msg.type_id() == ENumberType::REAL) {
        answer = recieveForAll<double>(msg);
    }
    else if (msg.type_id() == ENumberType::COMPLEX) {
        answer = recieveForAll<TComplex>(msg);
    }
    else {
        comm->send(QByteArray().append("Incorrect data type!"));
        return;
    }

    qDebug() << answer;
    Proto::ServerAnswer answerProto;
    answerProto.set_answer(answer.toStdString());

    comm->send(QByteArray().append(answerProto.SerializeAsString()));
}


