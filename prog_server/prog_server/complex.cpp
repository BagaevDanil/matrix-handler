#include "complex.h"

TComplex::TComplex() : _RealNumber(0), _ImaginaryUnit(0) {}

TComplex::TComplex(double realNumber, double imaginaryUnit) : _RealNumber(realNumber), _ImaginaryUnit(imaginaryUnit) {}

TComplex::TComplex(double num) : _RealNumber(num), _ImaginaryUnit(0){}

TComplex::TComplex(string str) {
    string a = "", b = "";
    int i = 0;
    if (str[i] == '-') {
        i++;
        a += "-";
    }
    while (i < (int)str.size() && str[i] != '+' && str[i] != '-') {
        a += str[i++];
    }
    while (i < (int)str.size() && str[i] != 'i') {
        b += str[i++];
    }

    _RealNumber = a == "" ? 0 : stod(a);
    _ImaginaryUnit = b == "" ? 0 : stod(b);
}


TComplex& TComplex::operator= (const TComplex &other)
{
    _RealNumber = other._RealNumber;
    _ImaginaryUnit = other._ImaginaryUnit;
    return *this;
}

TComplex& TComplex::operator= (const double &other)
{
    _RealNumber = other;
    _ImaginaryUnit = 0;
    return *this;
}


TComplex operator*(const TComplex &first, const TComplex &second)
{
    double newReal = (first._RealNumber * second._RealNumber) - (first._ImaginaryUnit * second._ImaginaryUnit);
    double newImag = (first._RealNumber * second._ImaginaryUnit) + (first._ImaginaryUnit * second._RealNumber);
    return TComplex(newReal, newImag);
}

TComplex operator*(const double &first, const TComplex &second)
{
    return TComplex(first * second._RealNumber, first * second._ImaginaryUnit);
}

TComplex operator+(const TComplex &first, const TComplex &second)
{
    return TComplex(first._RealNumber + second._RealNumber, first._ImaginaryUnit + second._ImaginaryUnit);
}

TComplex operator-(const TComplex &first, const TComplex &second)
{
    return TComplex(first._RealNumber - second._RealNumber, first._ImaginaryUnit - second._ImaginaryUnit);
}

TComplex operator/(const TComplex &first, const TComplex &second)
{
    double x1 = first._RealNumber, x2 = second._RealNumber, y1 = first._ImaginaryUnit, y2 = second._ImaginaryUnit;
    double newReal = ((x1 * x2) + (y1 * y2)) / ((x2 * x2) + (y2 * y2));
    double newImag = ((x2 * y1) - (x1 * y2)) / ((x2*x2) + (y2*y2));
    return TComplex(newReal, newImag);
}

ostream& operator<< (ostream &out, const TComplex &complexNum)
{
    string sign = complexNum._ImaginaryUnit >= 0 ? " + " : " - ";
    out << "(" << complexNum._RealNumber << sign << abs(complexNum._ImaginaryUnit) << "i)";
    return out;
}

istream& operator>> (istream &in, TComplex &complexNum)
{
    string str;
    in >> str;
    string a = "", b = "";
    int i = 0;
    if (str[i] == '-') {
        i++;
        a += "-";
    }
    while (i < (int)str.size() && str[i] != '+' && str[i] != '-') {
        a += str[i++];
    }
    while (i < (int)str.size() && str[i] != 'i') {
        b += str[i++];
    }

    complexNum._RealNumber = a == "" ? 0 : stod(a);
    complexNum._ImaginaryUnit = b == "" ? 0 : stod(b);
    return in;
}

double abs(TComplex &complexNum) {
    return sqrt(complexNum._RealNumber*complexNum._RealNumber + complexNum._ImaginaryUnit*complexNum._ImaginaryUnit);
}


QString TComplex::ToQString()
{
    QString sign = _ImaginaryUnit >= 0 ? " + " : " - ";
    QString ans = "(" + QString::number(_RealNumber) + sign + QString::number(abs(_ImaginaryUnit)) + "i)";
    return ans;
}
