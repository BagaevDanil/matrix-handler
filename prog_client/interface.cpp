#include "interface.h"
#include "common.h"

TInterface::TInterface(QWidget *parent)
    : QWidget(parent)
{
    setWindowTitle("Matrix Handler");
    setFixedSize(820, 550);
    int textEditWidth = 400, textEditHeight = 400;
    int buttonWidth = 191, buttonHeight = 40;

    // TextEdit
    _TextEditInput = new QTextEdit(this);
    _TextEditInput->setGeometry(5, 40, textEditWidth, textEditHeight);
    _TextEditInput->setLineWrapMode(QTextEdit::NoWrap);

    _TextEditOutput = new QTextEdit(this);
    _TextEditOutput->setGeometry(415, 40, textEditWidth, textEditHeight);
    _TextEditOutput->setLineWrapMode(QTextEdit::NoWrap);

    // Label
    _LabelInput = new QLabel("Поле для ввода", this);
    _LabelInput->setGeometry(5, 10, textEditWidth, 30);

    _LabelOutput = new QLabel("Поле для ответа", this);
    _LabelOutput->setGeometry(415, 10, textEditWidth, 30);

    // Button
    _ButtonFindTransposed = new QPushButton("Транспонировать", this);
    _ButtonFindTransposed->setGeometry(0*(buttonWidth + 15) + 5, 500, buttonWidth, buttonHeight);
    connect(_ButtonFindTransposed, SIGNAL(pressed()), this, SLOT(FindTransposed()));

    _ButtonFindRank = new QPushButton("Найти ранг", this);
    _ButtonFindRank->setGeometry(1*(buttonWidth + 15) + 5, 500, buttonWidth, buttonHeight);
    connect(_ButtonFindRank, SIGNAL(pressed()), this, SLOT(FindRank()));

    _ButtonPrintMatrix = new QPushButton("Вывести матрицу", this);
    _ButtonPrintMatrix->setGeometry(2*(buttonWidth + 15) + 5, 500, buttonWidth, buttonHeight);
    connect(_ButtonPrintMatrix, SIGNAL(pressed()), this, SLOT(PrintMatrix()));

    _ButtonFindDeterminant = new QPushButton("Найти определитель", this);
    _ButtonFindDeterminant->setGeometry(3*(buttonWidth + 15) + 5, 500, buttonWidth, buttonHeight);
    connect(_ButtonFindDeterminant, SIGNAL(pressed()), this, SLOT(FindDeterminant()));

    // RadioButton
    _RadioButtonReal = new QRadioButton("Вещественные", this);
    _RadioButtonReal->setGeometry(200+0, 450, 100, 50);
    _RadioButtonReal->setChecked(true);

    _RadioButtonComplex = new QRadioButton("Комплексные", this);
    _RadioButtonComplex->setGeometry(200+150, 450, 100, 50);

    _RadioButtonRational = new QRadioButton("Рациональные", this);
    _RadioButtonRational->setGeometry(200+300, 450, 100, 50);
}

void TInterface::FindTransposed() {
    qDebug() << "FindTransposed";
}

void TInterface::FindRank() {
    qDebug() << "FindRank";
}

void TInterface::PrintMatrix() {
    qDebug() << "PrintMatrix";
}

void TInterface::FindDeterminant() {
    qDebug() << "FindDeterminant";
}

TInterface::~TInterface()
{
    delete _TextEditInput;
    delete _TextEditOutput;
    delete _LabelInput;
    delete _LabelOutput;
    delete _ButtonFindTransposed;
    delete _ButtonFindRank;
    delete _ButtonPrintMatrix;
    delete _ButtonFindDeterminant;
}

void TInterface::answer(QString msg)
{
    _TextEditOutput->setText(msg);
}
