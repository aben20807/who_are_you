#ifndef STUDENT_H
#define STUDENT_H

#include<iostream>
#include<cstdlib>
#include<fstream>
using namespace std;

class Student{
public:
    Student();
    Student(const string);
    ~Student();

    void setStudentId(const string);
    string getStudentId();//學號

    string getDepartment();//科系
    string getIdentity();//入學身份
    string getEntryYear();//入學年份
    string getEntryMethod();//入學方法
    string getNumber();//座號
    string getCheckCode();//檢查碼

    void printAll();
    void setCheck(bool);
    bool getCheck();

private:
    string _name;
    string _studentid;
    bool _check;
};
#endif
