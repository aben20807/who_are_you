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
    
}
