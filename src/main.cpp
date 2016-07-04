#include "Student.h"
#include "Data.h"
// #include<iostream>
// #include<cstdlib>
// #include<fstream>
// using namespace std;

void checkFile(bool open_status);//確認檔案開啟是否成功
int countLine(istream& stream);//計算讀取檔案行數

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
            bool idError = true;
            while(idError){
                cout << "請輸入學號：";
                cin >> input_id;
                if(input_id.size() != 9){
                    cout << "學號輸入錯誤，請重新輸入" << endl;
                    continue;
                }
                cout << "請輸入姓名：";
                cin >> input_name;
                idError = false;
            }
            data->addData(input_id, input_name);
        }
        else if(command == "write"){
            if(!read_check){
                cout << "還未讀取資料，請先讀取" <<endl;
                continue;
            }
            data->outputData();
        }
        else if(command == "find"){
            if(!read_check){
                cout << "還未讀取資料，請先讀取" <<endl;
                continue;
            }
            cout << "輸入要找的學號：";
            string input_id;
            cin >> input_id;
            cout << data->findData(input_id) << endl;
        }
        else if(command == "delete"){
            if(!read_check){
                cout << "還未讀取資料，請先讀取" <<endl;
                continue;
            }
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
void checkFile(bool open_status){//確認檔案開啟是否成功
    if(!open_status)
    {
        cerr<<"Failed opening source.txt.";
        exit(1);
    }
}
int countLine(istream& stream){//計算讀取檔案行數
    int line = 0;
    string tmps;
    while(getline(stream,tmps)){
        line++;
    }
    return line;
}
