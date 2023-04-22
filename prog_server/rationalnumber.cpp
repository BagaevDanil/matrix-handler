#include "rationalnumber.h"

namespace {
    int gcd(int a, int b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
}

void TRationalNumber::MakeIrreducible() {
    int numGCD = gcd(_Numerator, _Denominator);
    _Numerator /= numGCD;
    _Denominator /= numGCD;
}

TRationalNumber::TRationalNumber() : _Numerator(0), _Denominator(0) {}

TRationalNumber::TRationalNumber(int numerator, int denominator) : _Numerator(numerator), _Denominator(denominator)
{
    MakeIrreducible();
}

TRationalNumber::TRationalNumber(int numerator) : _Numerator(numerator), _Denominator(1)
{
    MakeIrreducible();
}

TRationalNumber::TRationalNumber(string str)
{
    int pos = str.find("/");
    QString numeratorS = QString::fromStdString(str.substr(0, pos));
    QString denominatorS = pos != -1 ? QString::fromStdString(str.substr(pos+1)) : "1";
    _Numerator = numeratorS.toDouble();
    _Denominator = denominatorS.toDouble();
    MakeIrreducible();
}

TRationalNumber& TRationalNumber::operator= (const TRationalNumber &other)
{
    _Numerator = other._Numerator;
    _Denominator = other._Denominator;
    return *this;
}

TRationalNumber& TRationalNumber::operator= (const double &other)
{
    _Numerator = other;
    _Denominator = 1;
    return *this;
}


TRationalNumber operator*(const TRationalNumber &first, const TRationalNumber &second)
{
    double newNumerator = first._Numerator * second._Numerator;
    double newDenominator = first._Denominator * second._Denominator;
    return TRationalNumber(newNumerator, newDenominator);
}

TRationalNumber operator*(const double &first, const TRationalNumber &second)
{
    return TRationalNumber(first * second._Numerator, second._Denominator);
}

TRationalNumber operator+(const TRationalNumber &first, const TRationalNumber &second)
{
    double newNumerator = (first._Numerator * second._Denominator) + (second._Numerator * first._Denominator);
    double newDenominator = first._Denominator * second._Denominator;
    return TRationalNumber(newNumerator, newDenominator);
}

TRationalNumber operator-(const TRationalNumber &first, const TRationalNumber &second)
{
    double newNumerator = (first._Numerator * second._Denominator) - (second._Numerator * first._Denominator);
    double newDenominator = first._Denominator * second._Denominator;
    return TRationalNumber(newNumerator, newDenominator);
}

TRationalNumber operator/(const TRationalNumber &first, const TRationalNumber &second)
{
    double newNumerator = first._Numerator * second._Denominator;
    double newDenominator = first._Denominator * second._Numerator;
    return TRationalNumber(newNumerator, newDenominator);
}

ostream& operator<< (ostream &out, const TRationalNumber &rationalNumber)
{
    out << rationalNumber._Numerator;
    if (rationalNumber._Denominator != 1) {
        out << "/" << rationalNumber._Denominator;
    }
    return out;
}

QString TRationalNumber::ToQString() const {
    QString ans;
    ans += QString::number(_Numerator);
    if (_Denominator != 1) {
        ans += "/" + QString::number(_Denominator);
    }
    return ans;
}

istream& operator>> (istream &in, TRationalNumber /*&rationalNumber*/)
{
    return in;
}

bool operator==(const TRationalNumber &first, const TRationalNumber &second) {
    return first._Numerator == second._Numerator && first._Denominator == second._Denominator;
}

const int& TRationalNumber::Numerator() const {
    return _Numerator;
}

const int& TRationalNumber::Denominator() const {
    return _Denominator;
}

double abs(TRationalNumber &rationalNumber) {
    return abs(rationalNumber._Numerator / rationalNumber._Denominator);
}

double TRationalNumber::ToDouble() const {
    return (1.0 * _Numerator / _Denominator);
}

