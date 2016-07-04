#include "Student.h"
#include "Data.h"
// #include<iostream>
// #include<cstdlib>
// #include<fstream>
// using namespace std;

void checkFile(bool open_status);
int countLine(istream& stream);

int main()
{
    ifstream fin;
    // ofstream fout;
    bool read_check = false;
    do {
        cout << "輸入指令：";
        string command;
        cin >> command;
        Data *data;
        /*進入模式*/
        if(command == "read"){
            fin.open("source.txt",ios::in);
            checkFile(fin);
            read_check = true;
            int line = countLine(fin);
            fin.close();
            // cout<<line<<endl;
            data = new Data(line);
            data->inputData();
            data->printData();
        }
        else if(command == "sort"){
            /*TODO fix compare*/
            if(!read_check){
                cout << "還未讀取資料，請先讀取" <<endl;
                continue;
            }
            data->sortData();
            data->printData();
        }
        else if(command == "add"){
            if(!read_check){
                cout << "還未讀取資料，請先讀取" <<endl;
                continue;
            }
            string input_id, input_name;
            cout << "請輸入學號：";
            cin >> input_id;
            cout << "請輸入姓名：";
            cin >> input_name;
        }
        else if(command == "find"){
            if(!read_check){
                cout << "還未讀取資料，請先讀取" <<endl;
                continue;
            }
        }
        else if(command == "delete"){
            delete data;
            read_check = false;
        }
        else if(command == "exit"){
            break;
        }
        else{
            cout << "沒有此指令" << endl;
        }
    } while(true);
    return 0;
}
void checkFile(bool open_status){
    if(!open_status)
    {
        cerr<<"Failed opening source.txt.";
        exit(1);
    }
}
int countLine(istream& stream){
    int line = 0;
    string tmps;
    while(getline(stream,tmps)){
        line++;
    }
    return line;
}
