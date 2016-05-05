//
// Created by Michael on 2/19/2016.
//

#ifndef FIBONACCINUMBER_FIBONACCI_H
#define FIBONACCINUMBER_FIBONACCI_H
class Fibonacci{
public:
    static int Fib(int input){
        if (input==0){
            return 0;
        }
        else
            return input+Fib(input-1);
    }

private:

};
#endif //FIBONACCINUMBER_FIBONACCI_H
