#include <iostream>
#include <map>
#include <set>
#include <vector>
#include <string>

using namespace std;

static vector<string> split(string haystack, string needle) {
    vector<string> result;
    int startPos = 0;
    size_t foundPos = haystack.find(needle, startPos);
    while (foundPos != string::npos) {
        int count = foundPos - startPos;
        string token = haystack.substr(startPos, count);
        result.push_back(token);
        startPos = foundPos + needle.length();
        foundPos = haystack.find(needle, startPos);
    }
    // The remaining
    string token = haystack.substr(startPos, haystack.length() - startPos);
    result.push_back(token);
    return result;
}
string formatWord(string word){
    word[0]=toupper(word[0]);
    for(int i=1;i<word.length();i++){
        word[i]=tolower(word[i]);
    }
    return word;
}
string formatName(string name){
    vector<string> names=split(name," ");
    for (int i=0;i<names.size();i++){
        names[i]=formatWord(names[i]);
    }
    string result="";
    for(int i=0;i<names.size();i++){
        result+=names[i];
        if(i<names.size()-1){
            result+=" ";
        }
    }
    return result;
}

map<string,string> majors{
    {"CNTT","CONG NGHE THONG TIN"},
    {"DTVT","DIEN TU VIEN THONG"},
    {"KT","KE TOAN"},
    {"MKT","MARKETING"},
};

struct Student{
    string _id;
    string _name;
    string _class;
    string _email;
    Student(){
        _id="";
        _name="";
        _class="";
        _email="";
    }
    Student(string id,string name,string classs,string email){
        _id=id;
        _name=name;
        _class=classs;
        _email=email;
    }
    void inputStudent(){
        getline(cin,_id);
        getline(cin,_name);
        getline(cin,_class);
        getline(cin,_email);
    }
    void outputStudent(){
        _name=formatName(_name);
        cout<<_id<<" "<<_name<<" "<<_class<<" "<<_email<<endl;
    }
    void findStudent(string major){
        if (major=="KT"){
            string temp=_class.substr(0,4);
            if (temp.find("MKT")==string::npos&&temp.find("KT")!=string::npos){
                outputStudent();
            }
        }
        else if(_class.find(major)!=string::npos){
            outputStudent();
        }
    }

};
int main(){
    int numberOfStudent;cin>>numberOfStudent;
    cin.ignore();
    vector<Student> students;
    for(int i=0;i<numberOfStudent;i++){
        Student student;
        student.inputStudent();
        students.push_back(student);
    }
    int q;cin>>q;
    cin.ignore();
    while(q--){
        string major;getline(cin,major);
        cout<<"DANH SACH SINH VIEN NGANH "<<majors[major]<<" : "<<endl;
        for(int i=0;i<numberOfStudent;i++){
            students[i].findStudent(major);
        }
    }
    

}