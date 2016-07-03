#include "Data.h"

Data::Data(int num):_num_of_data(num){
    _data = new string[getNumOfData()];
}
Data::~Data(){

}
int Data::getNumOfData(){
    return _num_of_data;
}
void Data::inputData(){
    ifstream din;
    din.open("source.txt",ios::in);//開啟檔案讀取
    if(!din){
        cerr<<"Failed opening outFile.";
        exit(1);
    }
    for(int i = 0; i < _num_of_data; i++){
        getline(din,_data[i]);//逐行輸入
        // cout<<i<<" "<<_data[i]<<endl;
    }
    din.close();
}
void Data::printData(){
    for(int i = 0; i < _num_of_data; i++){
        cout << _data[i] << endl;
    }
}
