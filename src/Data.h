#ifndef DATA_H
#define DATA_H

#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
class Data{
public:
    Data(int num);
    ~Data();

    int getNumOfData();
    void inputData();
    void printData();
    void sortData();

private:
    const int _num_of_data;
    string *_data;
    string *_student_id;
    string *_student_name;
};
#endif
