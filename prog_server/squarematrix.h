#ifndef TSQUAREMATRIX_H
#define TSQUAREMATRIX_H

#include "matrix.h"
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

template <class number>
class TSquareMatrix : public TMatrix<number>
{

public:
    TSquareMatrix();
    TSquareMatrix(const TSquareMatrix& matrix);

    void EnterMatrix(number** matrix, int size);
    number FindDeterminant() const;
    int FindRank() const;
};


namespace {
    template <class number>
    void clearMemory(number** a, int n)
    {
        for (int i = 0; i < n; i++) {
            delete[] a[i];
        }
        delete [] a;
    }

    template <class number>
    number findDet(number** a, int n)
    {
        if (n == 1)
            return a[0][0];
        else if (n == 2)
            return a[0][0] * a[1][1] - a[0][1] * a[1][0];
        else {
            number d = 0;
            for (int k = 0; k < n; k++) {
                number** m = new number*[n-1];
                    for (int i = 0; i < n - 1; i++) {
                        m[i] = new number[n - 1];
                }
                for (int i = 1; i < n; i++) {
                    int t = 0;
                    for (int j = 0; j < n; j++) {
                        if (j == k)
                            continue;
                        m[i-1][t] = a[i][j];
                        t++;
                    }
                }
                d = d + (pow(-1, k + 2) * a[0][k] * findDet(m, n - 1));
                clearMemory(m, n - 1);
            }
            return d;
        }
    }
}


template <class number>
TSquareMatrix<number>::TSquareMatrix() : TMatrix<number>(1, 1) {}


template <class number>
TSquareMatrix<number>::TSquareMatrix(const TSquareMatrix& matrix) : TMatrix<number>(matrix) {}


template <class number>
number TSquareMatrix<number>::FindDeterminant() const
{
    return findDet(TMatrix<number>::_Matrix, TMatrix<number>::_SizeH);
}


template <class number>
int TSquareMatrix<number>::FindRank() const
{
    TSquareMatrix a(*this);
    const double EPS = 1E-9;

    int rank = TMatrix<number>::_SizeH;
    vector<char> line_used (TMatrix<number>::_SizeH);
    for (int i = 0; i < TMatrix<number>::_SizeH; ++i) {
        int j;
        for (j = 0; j < TMatrix<number>::_SizeH; ++j)
            if (!line_used[j] && abs(a._Matrix[j][i]) > EPS)
                break;
        if (j == TMatrix<number>::_SizeH)
            --rank;
        else {
            line_used[j] = true;
            for (int p = i + 1; p < TMatrix<number>::_SizeH; ++p)
                a._Matrix[j][p] = a._Matrix[j][p] / a._Matrix[j][i];
            for (int k = 0; k < TMatrix<number>::_SizeH; ++k)
                if (k != j && abs(a._Matrix[k][i]) > EPS)
                    for (int p = i + 1; p < TMatrix<number>::_SizeH; ++p)
                        a._Matrix[k][p] = a._Matrix[k][p] - a._Matrix[j][p] * a._Matrix[k][i];
        }
    }
    return rank;
}


template <class number>
void TSquareMatrix<number>::EnterMatrix(number** matrix, int size)
{
    TMatrix<number>::EnterMatrix(matrix, size, size);
}
#endif // TSQUAREMATRIX_H
