#include <QCoreApplication>
#include <gtest/gtest.h>
#include "complex.h"
#include <iostream>

using namespace std;

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
