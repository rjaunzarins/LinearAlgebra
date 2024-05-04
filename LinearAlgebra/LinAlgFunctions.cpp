#include "LinAlgFunctions.h"
#include "Matrix.h"

// LinAlgFunctions::LinAlgFunctions() : Matrix() {

// }

// /**
//  * reduceRow Function
//  * 
// */
// void LinAlgFunctions::reduceRow(int reduceRow, int reduceByRow, Fraction multiple) {
//     if(multiple != 0) {
//         for (size_t i = 0; i < Matrix::getCols(); ++i) {
//             //data[reduceRow][i] = data[reduceRow][i] - (data[reduceByRow][i] * multiple);
//             //Fraction returnValue = Matrix::getElement(reduceRow, i) - Matrix::getElement(reduceByRow, i) * multiple;
//             Matrix::setElement(reduceRow, i, Matrix::getElement(reduceRow, i) - Matrix::getElement(reduceByRow, i) * multiple);
//         }
//         std::cout << "Reduce R" << reduceRow+1 << " By R" << reduceByRow+1 << " * " << multiple << ":\n";
//     }
// }

// void LinAlgFunctions::checkX1() {
//     //Fraction &x1 = data[0][0];
//     Fraction &x1 = Matrix::getElement(0, 0);    
//     //If x1 is already 1, no changes
//     if(x1 == 1)
//         return;
//     //if x1 is 0, change with another row
//     else if(x1 == 0) {
//         //Loop through matrix to see if swap possible
//         for(size_t i = 1; i < rows; ++i) {
//             //If data[i][0] == 1 swap row 0 with row i
//             if(data[i][0] == 1) {
//                 swapRows(0, i);
//                 print();
//                 return;
//             }
//         }
//         //No row begins with 1, Loop through matrix to swap with any row starting != 0
//         for(size_t i = 1; i < rows; ++i) {
//             if(data[i][0] != 0) {
//                 swapRows(0, i);
//                 print();
//                 return;
//             }
//         }
//     }
//     //Else x1 is not 0, or 1 -> divide row by x1
//     else {
//         for(size_t i = 1; i < rows; ++i) {
//             //If data[i][0] == 1 swap row 0 with row i
//             if(data[i][0] == 1) {
//                 swapRows(0, i);
//                 print();
//                 return;
//             }  
//         }
//         //If no other rows begin with 1, divide row by itself
//         divideRow(0, data[0][0]);
//         print();
//     }
// }

// /**
//  * checkX2 Function
//  * Checks to see if data[1][1] is a 1. If it is not a 1 the function will
//  * either reduce the row with row data[2][i] or will divide by itself.
// */
// void LinAlgFunctions::checkX2() {
//     if(data[1][1] != 1) {
//         if(static_cast<Fraction>(data[1][1] - data[2][1] * data[1][1]) == 1) {
//             reduceRow(1,2,data[1][1]); //!Not sure if this should be here
//             print();
//         }
//         else {
//             divideRow(1, data[1][1]);
//             print();
//         }
//     }

// }

// /**
//  * checkX3 Function
//  * Checks to see if data[2][2] is a 1. If it is not a 1 the function will
//  * divide the element by itself.
// */
// void LinAlgFunctions::checkX3() {
//     if(data[2][2] != 1) {
//         divideRow(2, data[2][2]);
//         print();
//     }
// }

// /**
//  * checkSolved Function
// */
// bool LinAlgFunctions::checkSolved() {
//     if(data[2][0] == 0 && data[2][1] == 0 && data[2][2] == 0 && data[2][3] != 0) {
//         std::cout << "0 != " << data[2][3] << " - No Solutions\n";
//         return true;
//     }
//     else if(data[2][0] == 0 && data[2][1] == 0 && data[2][2] == 0 && data[2][3] == 0) {
//         std::cout << "Many Solutions\n";
//         return true;
//     }
//     if(data[0][0] != 1)
//         return false;
//     else if(data[1][1] != 1)
//         return false;
//     else if(data[2][2] != 1)
//         return false;
//     else if(data[0][1] != 0 || data[0][2] != 0)
//         return false;
//     else if(data[1][0] != 0 || data[1][2] != 0)
//         return false;
//     else if(data[2][0] != 0 || data[2][1] != 0)
//         return false;
//     else
//         return true;
// }

// /**
//  * checkCol1Zeros Function
//  * Reduces elements in column 1 to zero below x1
// */
// void LinAlgFunctions::checkCol1Zeros() {
//     for (size_t i = 1; i < rows; i++) {
//         if(data[i][0] != 0) {
//             reduceRow(i, 0, data[i][0]);
//             print();
//         }
//     }
// }

// /**
//  * checkCol2Zeros Function
//  * Reduces elements in column 2 to zero above and below x2
// */
// void LinAlgFunctions::checkCol2Zeros() {
//     if(static_cast<Fraction>(data[0][1] - data[1][1] * data[0][1]) == 0) {
//         reduceRow(0, 1, data[0][1]);
//         print();
//     }
//     if(static_cast<Fraction>(data[2][1] - data[1][1] * data[2][1]) == 0) {
//         reduceRow(2, 1, data[2][1]);
//         print();
//     }
// }

// /**
//  * checkCol3Zeros Function
//  * Reduces elements in column 3 to zero above x3
// */
// void LinAlgFunctions::checkCol3Zeros() {
//     if(static_cast<Fraction>(data[0][2] - data[2][2] * data[0][2]) == 0) {
//             reduceRow(0, 2, data[0][2]);
//             print();
//     }
//     if(static_cast<Fraction>(data[1][2] - data[2][2] * data[1][2]) == 0) {
//             reduceRow(1, 2, data[1][2]);
//             print();
//     }
// }

// /**
//  * swapFraction Function
//  * Swaps two fractions
//  * @param f1 The first Fraction
//  * @param f2 The second Fraction
// */
// void LinAlgFunctions::swapFraction(Fraction &f1, Fraction &f2) {
//     Fraction temp = f1;
//     f1 = f2;
//     f2 = temp;
// }

// /**
//  * swapRows Function
//  * Swaps two rows
//  * @param r1 The first row
//  * @param r2 The second row
// */
// void LinAlgFunctions::swapRows(int r1, int r2) {
//     for(int i = 0; i < cols; ++i) {
//         swapFraction(data[r1][i], data[r2][i]);
//     }  
//     std::cout << "Swap R" << r1+1 << " With R" << r2+1 << ":\n";
// }

// /**
//  * divideRow Function
//  * Divides a row by a constant
//  * @param row The row to divide
//  * @param f The constant to divide the row by
// */
// void LinAlgFunctions::divideRow(int row, Fraction f) {
//     for(int i = 0; i < cols; ++i) {
//         data[row][i] = data[row][i] / f;
//     } 
//     std::cout << "Divide R" << row+1 << " By " << f << ":\n";
// }