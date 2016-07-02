#ifndef DATA_H
#define DATA_H

#include<iostream>
using namespace std;
class Data{
public:
    Data(int num);
    ~Data();
    int getNumOfData();
    void inputData();
    void sortData();

private:
    int _num_of_data;
    string *_data;
};
#endif
