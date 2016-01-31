//
// Created by Michael on 1/29/2016.
//
#include <iostream>
using namespace std;
class Complex
{
public:
    Complex(int a =  0, int b = 0);
    Complex add(Complex &num1, Complex &num2);
    Complex sub(Complex &num2, Complex &num1);
    void print();

private:
    int real;
    int imaginary;
    int i = (-1)^(1/2);
};

void Complex::print() {
    cout << real<<"," << imaginary<<"i"<<endl;
}

Complex::Complex(int a, int b) {
    real = a;
    imaginary = b;
}

Complex Complex::add(Complex &num1, Complex &num2) {
    real = num1.real + num2.real;
    imaginary = num1.imaginary + num2.imaginary;

}

Complex Complex::sub(Complex &num2, Complex &num1) {
    real = num1.real - num2.real;
    imaginary = num1.imaginary - num2.imaginary;
}

#ifndef QUESTION_1_COMPLEX_H
#define QUESTION_1_COMPLEX_H

#endif //QUESTION_1_COMPLEX_H
