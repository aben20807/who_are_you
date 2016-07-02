#include"Student.h"

int main()
{
    string id;
    int count=0;
    cout<<"注意英文大寫，不需要空格，要跳出請輸入00"<<endl<<endl;
    while(1)
    {
        cout<<"------------------------------"<<endl;
        cout<<++count<<" : "<<endl;
        cout<<"輸入學號 : ";
        cin>>id;
        if(id=="00")break;//exit(1);
        Student stid(id);
        //cout<<stid.getStudentId()<<endl;
        cout<<"就讀科系 : "<<stid.getDepartment()<<endl;
        cout<<"目前身份 : "<<stid.getIdentity()<<endl;
        cout<<"入學年度 : "<<stid.getEntryYear()<<endl;
        cout<<"入學方式 : "<<stid.getEntryMethod()<<endl;
        cout<<"班級座號 : "<<stid.getNumber()<<endl<<endl;
        if(stid.getCheck())
        {
            stid.setCheck(false);
            cout<<"沒有這個人喔!!!!"<<endl;
        }
    }
    return 0;
}
