#include "Data.h"

Data::Data(int num):_num_of_data(num){
    _data = new string[getNumOfData()];
    _student_id = new string[getNumOfData()];
    _student_name = new string[getNumOfData()];
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
        for(int j = 0; j < _data[i].size(); j++){//把_data拆開
            if(j < 9){
                _student_id[i] += _data[i][j];
            }//中間空格不需要
            else if(j > 9){
                _student_name[i] += _data[i][j];
            }
        }
        // cout<<i<<" "<<_data[i]<<endl;
    }
    din.close();
}
void Data::printData(){
    for(int i = 0; i < _num_of_data; i++){
        // cout << _data[i] << endl;
        cout << _student_id[i] <<" "<< _student_name[i] << endl;
    }
}
