#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <algorithm>
using namespace std;


class Data{
public:
    Data(int num);
    ~Data();

    int getNumOfData();
    void inputData();
    void outputData();
    void printData();
    void sortData();
    bool compare(int i, int j);

private:
    const int _num_of_data;
    string *_data;
    string *_student_id;
    string *_student_name;
};

#endif
