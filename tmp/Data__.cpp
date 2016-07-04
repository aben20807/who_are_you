#include "Data.h"

Data::Data():{
}
Data::~Data(){
}
// int Data::getNumOfData(){
//     return _num_of_data;
// }
void Data::inputData(){
    ifstream din;
    din.open("source.txt",ios::in);//開啟檔案讀取
    if(!din){
        cerr<<"Failed opening source.txt.";
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
void Data::outputData(){
    ofstream dout;
    dout.open("data.txt",ios::out);//開啟檔案寫入
    if(!dout){
        cerr<<"Failed opening data.txt.";
        exit(1);
    }
    for(int i = 0; i < _num_of_data; i++){
        dout << _student_id[i] <<" "<< _student_name[i] << endl;
    }
}
void Data::printData(){
    for(int i = 0; i < _num_of_data; i++){
        // cout << _data[i] << endl;
        cout << _student_id[i] <<" "<< _student_name[i] << endl;
    }
}
void Data::sortData(){
    /*TODO fix bug*/
    int f[_num_of_data];
    for(int i = 0; i < _num_of_data; i++){
        f[i] = i;
    }
    sort(f, f + _num_of_data, compare);
}
// bool Data::compare(int i, int j){
//     if(_student_id[i] > _student_id[j])return true;
//     return false;
// }
bool compare(int i, int j){
    return (_student_id[i] > _student_id[j]);
}
