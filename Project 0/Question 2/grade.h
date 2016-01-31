//
// Created by Michael on 1/29/2016.
//
#include <fstream>
#include <iostream>
#include <stdlib.h>

using namespace std;
const int maxsize=20;
struct Student{
    char stuID[5];
    int midterm;
    int final;
    int quiz1;
    int quiz2;
    double average;
    char grade;
};

class Stuclass{
public:
    Stuclass();//constructor
    void input();//read data from a file
    void printout();// output data to a file
    void calculation();// calculate the average grade and final letter grade for each student
private:
    Student myclass[maxsize];
    int numberofstudents;
};
#ifndef QUESTION_2_GRADE_H
#define QUESTION_2_GRADE_H

#endif //QUESTION_2_GRADE_H

void Stuclass::input() {
    ifstream in_stream;
    in_stream.open("input.dat");
    if(in_stream.fail()){
        cout << "Input file opening failed ."<<endl;
        exit(1);
    }
    int x;
    in_stream >> x;
    numberofstudents =x;
    for(int i = 0; i<numberofstudents; i++){
        //read Student ID (4-digit)
        in_stream >> myclass[i].stuID;
        in_stream >> myclass[i].quiz1;
        in_stream >> myclass[i].quiz2;
        in_stream >> myclass[i].midterm;
        in_stream >> myclass[i].final;
    }
    in_stream.close();
}
void Stuclass::printout() {
    ofstream out_stream("output.dat");
    if (out_stream.fail()){
        cout<< "Output file opening failed."<<endl;
        exit(1);
    }
    out_stream<<"StuID\tQuiz1\tQuiz2\tMidterm\tFinal\tAverage\tFinal Grade"<<endl;
    for (int i = 0; i < numberofstudents; ++i) {
        out_stream<<myclass->stuID<<"\t"
        <<myclass->quiz1<<"\t"
        <<myclass->quiz2<<"\t"
        <<myclass->midterm<<"\t"
        <<myclass->final<<"\t"
        <<myclass->average<<"\t"
        <<myclass->grade<<"\t"<<endl;
    }
    out_stream.close();
}