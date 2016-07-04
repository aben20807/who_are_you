#include"Student.h"

Student::Student(){
    setCheck(false);
    setStudentId("A00000000");
}
Student::Student(string init_id){
    setCheck(false);
    setStudentId(init_id);
}
Student::~Student(){

}
void Student::setStudentId(string set_id){
    _studentid = set_id;
}

string Student::getStudentId(){
    return _studentid;
}
void Student::setCheck(bool tf){
    _check = tf;
}
bool Student::getCheck(){
    return _check;
}
string Student::getDepartment(){
    if(_studentid[0]=='A'&&_studentid[1]=='N')
        return "大一全校不分系學士學位學程";
    else if(_studentid[0]=='B'&&_studentid[1]=='1')
        return "中國文學系";
    else if(_studentid[0]=='B'&&_studentid[1]=='2')
        return "外國語文學系";
    else if(_studentid[0]=='B'&&_studentid[1]=='3')
        return "歷史學系";
    else if(_studentid[0]=='B'&&_studentid[1]=='5')
        return "臺灣文學系";
    else if(_studentid[0]=='C'&&_studentid[1]=='1')
        return "數學系";
    else if(_studentid[0]=='C'&&_studentid[1]=='2')
        return "物理學系";
    else if(_studentid[0]=='C'&&_studentid[1]=='3')
        return "化學系";
    else if(_studentid[0]=='C'&&_studentid[1]=='4')
        return "地球科學系";
    else if(_studentid[0]=='C'&&_studentid[1]=='5')
        return "生命科學系";
    else if(_studentid[0]=='C'&&_studentid[1]=='6')
        return "生物科技與產業科學系";
    else if(_studentid[0]=='D'&&_studentid[1]=='2')
        return "法律學系";
    else if(_studentid[0]=='D'&&_studentid[1]=='4')
        return "政治學系";
    else if(_studentid[0]=='D'&&_studentid[1]=='5')
        return "經濟學系";
    else if(_studentid[0]=='D'&&_studentid[1]=='8')
        return "心理學系";
    else if(_studentid[0]=='E'&&_studentid[1]=='1')
        return "機械工程學系";
    else if(_studentid[0]=='E'&&_studentid[1]=='2')
        return "電機工程學系";
    else if(_studentid[0]=='E'&&_studentid[1]=='3')
        return "化學工程學系";
    else if(_studentid[0]=='E'&&_studentid[1]=='4')
        return "資源工程學系";
    else if(_studentid[0]=='E'&&_studentid[1]=='5')
        return "材料科學及工程學系";
    else if(_studentid[0]=='E'&&_studentid[1]=='6')
        return "土木工程學系";
    else if(_studentid[0]=='E'&&_studentid[1]=='7')
        return "建築學系";
    else if(_studentid[0]=='E'&&_studentid[1]=='8')
        return "水利及海洋工程學系";
    else if(_studentid[0]=='E'&&_studentid[1]=='9')
        return "工程科學系";
    else if(_studentid[0]=='F'&&_studentid[1]=='0')
        return "能源國際學士學位學程";
    else if(_studentid[0]=='F'&&_studentid[1]=='1')
        return "系統及船舶機電工程學系";
    else if(_studentid[0]=='F'&&_studentid[1]=='2')
        return "都市計劃學系";
    else if(_studentid[0]=='F'&&_studentid[1]=='3')
        return "工業設計學系";
    else if(_studentid[0]=='F'&&_studentid[1]=='4')
        return "航空太空工程學系";
    else if(_studentid[0]=='F'&&_studentid[1]=='5')
        return "環境工程學系";
    else if(_studentid[0]=='F'&&_studentid[1]=='6')
        return "測量及空間資訊學系";
    else if(_studentid[0]=='F'&&_studentid[1]=='7')
        return "資訊工程學系";
    else if(_studentid[0]=='F'&&_studentid[1]=='8')
        return "光電科學與工程學系";
    else if(_studentid[0]=='F'&&_studentid[1]=='9')
        return "生物醫學工程學系";
    else if(_studentid[0]=='H'&&_studentid[1]=='1')
        return "會計學系";
    else if(_studentid[0]=='H'&&_studentid[1]=='2')
        return "統計學系";
    else if(_studentid[0]=='H'&&_studentid[1]=='3')
        return "工業與資訊管理學系";
    else if(_studentid[0]=='H'&&_studentid[1]=='4')
        return "企業管理學系";
    else if(_studentid[0]=='H'&&_studentid[1]=='5')
        return "交通管理科學系";
    else if(_studentid[0]=='I'&&_studentid[1]=='2')
        return "護理學系";
    else if(_studentid[0]=='I'&&_studentid[1]=='3')
        return "醫學檢驗生物技術學系";
    else if(_studentid[0]=='I'&&_studentid[1]=='5')
        return "醫學系";
    else if(_studentid[0]=='I'&&_studentid[1]=='6')
        return "物理治療學系";
    else if(_studentid[0]=='I'&&_studentid[1]=='7')
        return "職能治療學系";
    else if(_studentid[0]=='I'&&_studentid[1]=='8')
        return "藥學系";
    else
    {
        setCheck(true);
        return "沒有此科系!!!!";
    }
}
string Student::getIdentity(){
    if(_studentid[2]=='4')
        return "大學日間部";
    else if(_studentid[2]=='5')
        return "大學夜間部";
    else if(_studentid[2]=='6')
        return "碩士班";
    else if(_studentid[2]=='7')
        return "在職專班";
    else if(_studentid[2]=='8')
        return "博士班";
    else
    {
        setCheck(true);
        return "沒有此身份!!!!";
    }
}
string Student::getEntryYear(){
    if(_studentid[3]<'0'&&_studentid[3]>'9'||_studentid[4]<'0'&&_studentid[4]>'9')
    {
        setCheck(true);
        return "沒有資料!!!!";
    }
    string tmp;
    if(_studentid[3]>='7')
    {
        tmp+=_studentid[3];
        tmp+=_studentid[4];
    }
    else
    {
        tmp+='1';
        tmp+=_studentid[3];
        tmp+=_studentid[4];
    }
    return tmp;
}
string Student::getEntryMethod(){
    if(_studentid[5]=='0')
        return "體資生";
    else if(_studentid[5]=='1')
        return "考試入學且系所不分班或甲班";
    else if(_studentid[5]=='2')
        return "乙班";
    else if(_studentid[5]=='3')
        return "丙班";
    else if(_studentid[5]=='4')
        return "推薦入學";
    else if(_studentid[5]=='5')
        return "僑生";
    else if(_studentid[5]=='6')
        return "申請入學";
    else if(_studentid[5]=='7')
        return "外籍生";
    else if(_studentid[5]=='8')
        return "交換學生";
    else if(_studentid[5]=='9')
        return "轉學生";
    else
    {
        setCheck(true);
        return "沒有此入學方式!!!!";
    }
}
string Student::getNumber(){
    if(_studentid[6]<'0'&&_studentid[6]>'9'||_studentid[7]<'0'&&_studentid[7]>'9')
    {
        setCheck(true);
        return "沒有資料!!!!";
    }
    string tmp;
    tmp+=_studentid[6];
    tmp+=_studentid[7];
    return tmp;
}
void Student::printAll(){
    cout<<"就讀科系："<<getDepartment()<<endl;
    cout<<"目前身份："<<getIdentity()<<endl;
    cout<<"入學年度："<<getEntryYear()<<endl;
    cout<<"入學方式："<<getEntryMethod()<<endl;
    cout<<"班級座號："<<getNumber()<<endl;
}
