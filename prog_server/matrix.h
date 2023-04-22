#ifndef TMATRIX_H
#define TMATRIX_H
#include <vector>
#include <iostream>
#include <iomanip>
#include <math.h>

using namespace std;

template <class number>
class TMatrix
{
protected:
    number** _Matrix;
    int _SizeH;
    int _SizeW;
    void DeleteMemoryMatrix();

public:
    TMatrix();
    TMatrix(const TMatrix& matrix);
    TMatrix(int sizeH, int sizeW);
    ~TMatrix();

    void EnterMatrix(number** matrix, int sizeH, int sizeW);
    friend ostream& operator<< (ostream& out, const TMatrix& matrix);
    TMatrix* FindTransposed() const;
    const number& Get(int y, int x) const;
    string ToString() const;
    const int& GetSizeH() const;
    const int& GetSizeW() const;
};


template <class number>
TMatrix<number>::TMatrix(int sizeH, int sizeW) : _SizeH(sizeH), _SizeW(sizeW)
{
    _Matrix = new number*[_SizeH];
    for (int y = 0; y < _SizeH; y++) {
        _Matrix[y] = new number [_SizeW];
        for (int x = 0; x < _SizeW; x++) {
            _Matrix[y][x] = 0;
        }
    }
}


template <class number>
TMatrix<number>::TMatrix() : TMatrix(1, 1) {}


template <class number>
TMatrix<number>::TMatrix(const TMatrix& matrix)
{
    _SizeH = matrix._SizeH;
    _SizeW = matrix._SizeW;

    _Matrix = new number*[_SizeH];
    for (int y = 0; y < _SizeH; y++) {
        _Matrix[y] = new number [_SizeW];
        for (int x = 0; x < _SizeW; x++) {
            _Matrix[y][x] = matrix._Matrix[y][x];
        }
    }
}


template <class number>
const int& TMatrix<number>::GetSizeH() const
{
    return _SizeH;
}


template <class number>
const int& TMatrix<number>::GetSizeW() const
{
    return _SizeW;
}


template <class number>
TMatrix<number>::~TMatrix()
{
    DeleteMemoryMatrix();
}


template <class number>
void TMatrix<number>::DeleteMemoryMatrix()
{
    for (int y = 0; y < _SizeH; y++) {
        delete[] _Matrix[y];
    }
    delete[] _Matrix;
}


template <class number>
TMatrix<number>* TMatrix<number>::FindTransposed() const
{
    TMatrix* transposedMatrix = new TMatrix(_SizeW, _SizeH);

    for(int i = 0; i < transposedMatrix->_SizeH; ++i) {
        for(int j = 0; j < transposedMatrix->_SizeW; ++j) {
            transposedMatrix->_Matrix[i][j] = _Matrix[j][i];
        }
    }
    return transposedMatrix;
}


template <class number>
void TMatrix<number>::EnterMatrix(number** matrix, int sizeH, int sizeW)
{
    DeleteMemoryMatrix();

    _SizeH = sizeH;
    _SizeW = sizeW;
    _Matrix = new number*[_SizeH];

    for (int y = 0; y < _SizeH; y++) {
        _Matrix[y] = new number[_SizeW];
        for (int x = 0; x < _SizeW; x++) {
            _Matrix[y][x] = matrix[y][x];
        }
    }
}


template <class number>
string TMatrix<number>::ToString() const
{
    ostringstream out;
    for (int y = 0; y < _SizeH; y++) {
        for (int x = 0; x < _SizeW; x++) {
            out << setw(10) << _Matrix[y][x];
        }
        out << "\n";
    }
    std::ostringstream os;
    return out.str();
}


template <class number>
std::ostream& operator<< (std::ostream &out, const TMatrix<number> &matrix)
{
    for (int y = 0; y < matrix._SizeH; y++) {
        for (int x = 0; x < matrix._SizeW; x++) {
            out << setw(10) << matrix._Matrix[y][x];
        }
        out << "\n";
    }
    return out;
}


template <class number>
const number& TMatrix<number>::Get(int y, int x) const
{
    return _Matrix[y][x];
}

#endif // TMATRIX_H

