#ifndef INTERFACE_H
#define INTERFACE_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QTextEdit>
#include <QPushButton>
#include <QRadioButton>
#include "common.h"
#include "data.pb.h"

class TInterface : public QWidget
{
    Q_OBJECT

public:
    TInterface(QWidget *parent = 0);
    ~TInterface();

private:
    QTextEdit* _TextEditInput;
    QTextEdit* _TextEditOutput;
    QLabel* _LabelInput;
    QLabel* _LabelOutput;
    QPushButton* _ButtonFindTransposed;
    QPushButton* _ButtonFindRank;
    QPushButton* _ButtonEnterMatrix;
    QPushButton* _ButtonPrintMatrix;
    QPushButton* _ButtonFindDeterminant;
    QRadioButton* _RadioButtonReal;
    QRadioButton* _RadioButtonComplex;
    QRadioButton* _RadioButtonRational;
    int GetTypeId();
    Proto::Matrix GetMatrix();
    void SendMassage(int actionId);

public slots:
    void answer(QString);

public slots:
    void FindTransposed();
    void FindRank();
    void EnterMatrix();
    void PrintMatrix();
    void FindDeterminant();

signals:
    void request(std::string);

};

#endif // INTERFACE_H
