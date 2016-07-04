#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <algorithm>
using namespace std;
bool compare(int i, int j);
class Data{
    friend bool compare(int i, int j);
public:
    Data();
    ~Data();

    // int getNumOfData();
    void inputData();
    void outputData();
    void printData();
    void sortData();
    // bool compare(int i, int j);

private:
    // const int _num_of_data;
    string _data;
    string _student_id;
    string _student_name;
};

#endif
