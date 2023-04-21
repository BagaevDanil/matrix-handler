#include <QCoreApplication>
#include <gtest/gtest.h>
#include "complex.h"
#include "rationalnumber.h"
#include "matrix.h"
#include <iostream>

using namespace std;

// Matrix

TEST(Matrix, enterMatrix) {
    TMatrix<double> matrix;
    int h = 7, w = 4;
    double **area = new double*[h];

    for (int y = 0; y < h; y++) {
        area[y] = new double[w];
        for (int x = 0; x < w; x++) {
            area[y][x] = y*h + x;
        }
    }
    matrix.EnterMatrix(area, h, w);

    ASSERT_EQ(matrix.GetSizeH(), h);
    ASSERT_EQ(matrix.GetSizeW(), w);
    ASSERT_EQ(matrix.Get(5, 2), 5*h + 2);
    ASSERT_EQ(matrix.Get(1, 0), 1*h + 0);
}

// Rational

TEST(Rational, createFromString1) {
    TRationalNumber num("314/156");

    ASSERT_TRUE(num.Numerator() == 157);
    ASSERT_TRUE(num.Denominator() == 78);
}

TEST(Rational, createFromString2) {
    TRationalNumber num("190/19");

    ASSERT_TRUE(num.Numerator() == 10);
    ASSERT_TRUE(num.Denominator() == 1);
}

TEST(Rational, createFromString3) {
    TRationalNumber num("115");

    ASSERT_TRUE(num.Numerator() == 115);
    ASSERT_TRUE(num.Denominator() == 1);
}

TEST(Rational, addition) {
    TRationalNumber num1(144, 42);
    TRationalNumber num2(67, 21);
    TRationalNumber ans(139, 21);

    auto prediction = num1 + num2;

    ASSERT_TRUE(prediction == ans);
}

TEST(Rational, subtraction) {
    TRationalNumber num1(144, 42);
    TRationalNumber num2(67, 21);
    TRationalNumber ans(5, 21);

    auto prediction = num1 - num2;
    ASSERT_TRUE(prediction == ans);
}

TEST(Rational, multiplications) {
    TRationalNumber num1(144, 42);
    TRationalNumber num2(67, 21);
    TRationalNumber ans(536, 49);

    auto prediction = num1 * num2;
    ASSERT_TRUE(prediction == ans);
}

TEST(Rational, division) {
    TRationalNumber num1(144, 42);
    TRationalNumber num2(67, 21);
    TRationalNumber ans(72, 67);

    auto prediction = num1 / num2;
    ASSERT_TRUE(prediction == ans);
}

TEST(Rational, toString) {
    TRationalNumber num(1434, 342);
    QString ans = "239/57";

    auto numStr = num.ToQString();

    ASSERT_TRUE(numStr == ans);
}

TEST(Rational, toString2) {
    TRationalNumber num(1434, 2);
    QString ans = "717";

    auto numStr = num.ToQString();

    ASSERT_TRUE(numStr == ans);
}

// Complex

TEST(Complex, createFromString1) {
    double real = 10331.344;
    double img = -7562.13;

    string complexStr = to_string(real) + to_string(img) + "i";
    TComplex complex(complexStr);

    ASSERT_TRUE(complex.RealNumber() == real);
    ASSERT_TRUE(complex.ImaginaryUnit() == img);
}

TEST(Complex, createFromString2) {
    double real = 0;
    double img = 45243.5245;

    string complexStr = to_string(real) + "+" + to_string(img) + "i";
    TComplex complex(complexStr);

    ASSERT_TRUE(complex.RealNumber() == real);
    ASSERT_TRUE(complex.ImaginaryUnit() == img);
}

TEST(Complex, createFromString3) {
    double real = 48249.191143;
    double img = 0;

    string complexStr = to_string(real) + "+" + to_string(img) + "i";
    TComplex complex(complexStr);

    ASSERT_TRUE(complex.RealNumber() == real);
    ASSERT_TRUE(complex.ImaginaryUnit() == img);
}

TEST(Complex, addition) {
    TComplex num1(14242, 48);
    TComplex num2(595, 854);
    TComplex ans(14837, 902);

    auto prediction = num1 + num2;
    ASSERT_TRUE(prediction == ans);
}

TEST(Complex, subtraction) {
    TComplex num1(14242, 48);
    TComplex num2(595, 854);
    TComplex ans(14242-595, 48-854);

    auto prediction = num1 - num2;
    ASSERT_TRUE(prediction == ans);
}

TEST(Complex, multiplications) {
    TComplex num1(14242, 48);
    TComplex num2(595, 854);
    TComplex ans(8432998, 12191228);

    auto prediction = num1 * num2;
    ASSERT_TRUE(prediction == ans);
}

TEST(Complex, division) {
    TComplex num1(1434, 342);
    TComplex num2(13, 16);
    TComplex ans(56.73882352941177, -43.52470588235294);

    auto prediction = num1 / num2;
    ASSERT_TRUE(prediction == ans);
}

TEST(Complex, toString) {
    TComplex num(1434.38, 342.123);
    QString ans = "(1434.38 + 342.123i)";

    auto numStr = num.ToQString();
    ASSERT_TRUE(numStr == ans);
}

int main()
{
    testing::InitGoogleTest();
    return RUN_ALL_TESTS();
}
