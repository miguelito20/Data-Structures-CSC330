#include "complex.h"
using namespace std;
int main()
{
    Complex num1(2, 5), num2(7, 8), num3, num4 ;
    num1.print();
    num2.print();
    num3.add(num1,num2); // num3=num1+num2
    num3.print();
    num4.sub(num1,num2); //num4= num1-num2
    num4.print();
    return 0;
}