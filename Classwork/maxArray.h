//
// Created by Michael on 2/19/2016.
//

#ifndef FIBONACCINUMBER_MAXARRAY_H
#define FIBONACCINUMBER_MAXARRAY_H
class maxArray{
public:
    static int array(int &array[], const int size){
        if (array[size] ==0){
            return array[size];
        }
        else{
            int a = size -1;
            return maxArray::array(&array[a], size);
        }
    }

private:

};
#endif //FIBONACCINUMBER_MAXARRAY_H
