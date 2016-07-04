#ifndef DATA_H
#define DATA_H

#include <iostream>
#include <cstdlib>
#include <fstream>
#include <algorithm>
#include <vector>
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
    void addData(const string input_id, const string input_name);
    string findData(const string input_id);

private:
    int _num_of_data;
    vector<string> _student_id;
    vector<string> _student_name;
};

#endif
