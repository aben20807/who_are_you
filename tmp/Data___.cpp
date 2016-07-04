#include "Data.h"


Data::Data(int num):_num_of_data(num){
    // _data = new string[getNumOfData()];
    // _student_id = new string[getNumOfData()];
    // _student_name = new string[getNumOfData()];
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
        cerr<<"Failed opening source.txt.";
        exit(1);
    }
    // for(int i = 0; i < _num_of_data; i++){
    //     getline(din,_data[i]);//逐行輸入
    //     for(int j = 0; j < _data[i].size(); j++){//把_data拆開
    //         if(j < 9){
    //             _student_id[i] += _data[i][j];
    //         }//中間空格不需要
    //         else if(j > 9){
    //             _student_name[i] += _data[i][j];
    //         }
    //     }
    //     // cout<<i<<" "<<_data[i]<<endl;
    // }

    for(int i = 0; i < _num_of_data; i++){
        string tmps = '\0', tmpid = '\0', tmpname = '\0';
        getline(din,tmps);//逐行輸入
        // _data.push_back(tmps);
        // for(int j = 0; j < tmps.size(); j++){//把_data拆開
        //     if(j < 9){
        //         tmpid += tmps[j];
        //     }//中間空格不需要
        //     else if(j > 9){
        //         tmpname += tmps[j];
        //     }
        // }
        // _student_id.push_back(tmpid);
        // _student_name.push_back(tmpname);
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
    // for(int i = 0; i < _num_of_data; i++){
    //     dout << _student_id[i] <<" "<< _student_name[i] << endl;
    // }
}
void Data::printData(){
    // for(int i = 0; i < _num_of_data; i++){
    //     // cout << _data[i] << endl;
    //     cout << _student_id[i] <<" "<< _student_name[i] << endl;
    // }
    for(int i = 0; i < _num_of_data; i++){
        // cout << _data[i] << endl;
        cout << _student_id.at(i) <<" "<< _student_name.at(i) << endl;
    }
}
void Data::sortData(){
    /*TODO fix bug*/
    // int index[_num_of_data];
    // for(int i = 0; i < _num_of_data; i++){
    //     index[i] = i;
    // }
    // sort(index, index + _num_of_data, compare);//boost::bind(&Data::compare,this,_1,_2));
}
// bool Data::compare(const int i, const int j){
//     return (_student_id[i] > _student_id[j]);
// }
void Data::addData(const string id, const string name){

}
