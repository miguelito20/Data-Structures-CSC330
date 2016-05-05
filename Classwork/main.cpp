#include <iostream>
#include "Fibonacci.h"
#include "maxArray.h"

using namespace std;

int main() {
    cout << Fibonacci::Fib(18) << endl;
    int a[8] ={4,7,3,6,8,1,9,2};
    cout << maxArray::array(a, 8) << endl;
    return 0;
}