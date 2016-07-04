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
    void addData(const string id, const string name);
    void sortData();
    bool compare(int i, int j);

private:
    int _num_of_data;
    vector<string> _data;
    vector<string> _student_id;
    vector<string> _student_name;
    // string *_data;
    // string *_student_id;
    // string *_student_name;
};

#endif
