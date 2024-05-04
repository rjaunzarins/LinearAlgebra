#include "Matrix.h"
#include "Fraction.h"
//#include "LinAlgFunctions.h" Not currently using this

#include <iostream>

int main() {

    Matrix m;
    m.print();

    bool solved = false;
    while(!m.checkSolved()) {    
        m.checkX1();
        solved = m.checkSolved();
        if(solved) { break; }

        m.checkCol1Zeros();
        m.checkX2();
        m.checkCol2Zeros();
        m.checkX3();
        m.checkCol3Zeros();
    }


}