#include <iostream>
#include<cstdlib>
#include<fstream>
using namespace std;
void checkFile(bool open_status);
int main()
{
    ifstream fin;
    string a;
    int line = 0;
    string c,lc;
    fin.open("source.in",ios::in);
    checkFile(fin);
    while(getline (fin,c))//逐個讀入字元直到文件结尾
    {
        line++;
        // if(c=='\n')line ++;//遇到換行就+1
        // cout << c;
        lc=c;//保存上一字元
    }
    fin.close();//關閉文件
    // if(lc!='\n') line ++;//處理末行
    cout << line << endl;
    return 0;
}
void checkFile(bool open_status){
    if(!open_status)
    {
        cerr<<"Failed opening outFile.";
        exit(1);
    }
}
