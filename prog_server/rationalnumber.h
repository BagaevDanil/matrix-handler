#ifndef TRATIONALNUMBER_H
#define TRATIONALNUMBER_H
#include <iostream>
#include <math.h>
#include <QString>

using namespace std;

class TRationalNumber
{
public:
    TRationalNumber();
    TRationalNumber(int numerator, int denominator);
    TRationalNumber(int numerator);
    TRationalNumber(string str);
    TRationalNumber& operator=(const TRationalNumber &other);
    TRationalNumber& operator=(const double &other);
    friend TRationalNumber operator*(const TRationalNumber &first, const TRationalNumber &second);
    friend TRationalNumber operator*(const double &first, const TRationalNumber &second);
    friend TRationalNumber operator+(const TRationalNumber &first, const TRationalNumber &second);
    friend TRationalNumber operator-(const TRationalNumber &first, const TRationalNumber &second);
    friend TRationalNumber operator/(const TRationalNumber &first, const TRationalNumber &second);
    friend bool operator==(const TRationalNumber &first, const TRationalNumber &second);
    friend ostream& operator<< (ostream& out, const TRationalNumber& complexNum);
    friend istream& operator>> (istream &in, TRationalNumber &complexNum);
    friend double abs(TRationalNumber &complexNum);
    QString ToQString();
    double ToDouble();
    int Numerator();
    int Denominator();

private:
    int _Numerator;
    int _Denominator;
    void MakeIrreducible();
};

#endif // TRATIONALNUMBER_H
