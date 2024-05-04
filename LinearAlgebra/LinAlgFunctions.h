#ifndef LINALGFUNCTIONS_H
#define LINALGFUNCTIONS_H
#include "Matrix.h"

//Class can be used to further break down Matrix class
//some functions will not work properly such as swapFraction and swapRows as they
//use pass by reference variables to change elements of matrix from within local function.

class LinAlgFunctions : public Matrix {
    public:
        LinAlgFunctions();
        void reduceRow(int reduceRow, int reduceByRow, Fraction multiple);
        void checkRowSolved();
        bool isLeadingElement1(int row);
        int getLeading1Element(int row);
        int getLeadingElement(int row);
        void checkX1();
        void checkX2();
        void checkX3();
        bool checkSolved();
        void checkColZeros();
        void checkCol1Zeros();
        void checkCol2Zeros();
        void checkCol3Zeros();
        void swapFraction(Fraction&, Fraction&);
        void swapRows(int r1, int r2);
        void multiplyRow(int row, Fraction f);
        void divideRow(int row, Fraction f);
        void addRows(int r1, int r2, Fraction multiple);
    private:
};

#endif