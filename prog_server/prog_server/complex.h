#ifndef TCOMPLEX_H
#define TCOMPLEX_H
#include <iostream>
#include <QString>
#include <math.h>

using namespace std;

class TComplex
{
public:
    TComplex();
    TComplex(double realNumber, double imaginaryUnit);
    TComplex(string str);
    TComplex(double num);

    TComplex& operator=(const TComplex &other);
    TComplex& operator=(const double &other);
    friend TComplex operator*(const TComplex &first, const TComplex &second);
    friend TComplex operator*(const double &first, const TComplex &second);
    friend TComplex operator+(const TComplex &first, const TComplex &second);
    friend TComplex operator-(const TComplex &first, const TComplex &second);
    friend TComplex operator/(const TComplex &first, const TComplex &second);
    friend ostream& operator<< (ostream& out, const TComplex& complexNum);
    friend istream& operator>> (istream &in, TComplex &complexNum);
    friend double abs(TComplex &complexNum);
    QString ToQString();

private:
    double _RealNumber;
    double _ImaginaryUnit;
};

#endif // TCOMPLEX_H
