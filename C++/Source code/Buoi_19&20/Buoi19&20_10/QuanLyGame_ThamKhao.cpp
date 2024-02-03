#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
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

string displayTimeFromMinute(long long minute){
    long long hour=minute/60;
    minute%=60;
    return to_string(hour)+" gio "+to_string(minute) + " phut";
}

struct Time{
    int _hour;
    int _minute;
    Time(){
        _hour=0;
        _minute=0;
    }
    Time(int hour,int minute){
        _hour=hour;
        _minute=minute;
    }
    Time(string time){
        vector<string> times=split(time,":");
        _hour=stoi(times[0]);
        _minute=stoi(times[1]);
    }
    void outputTime(){
        cout<<_hour<<":"<<_minute;
    }
    long long theTimeUse(Time another){
        //Time end - time begin
        long long hour=another._hour-_hour;
        long long minute=another._minute-_minute;
        if (minute<0){
            hour--;
            minute+=60;
        }
        return hour*60+minute*1LL;
    }
    
};

struct NetUser{
    string _userName;
    string _password;
    string _name;
    Time _hourBegin;
    Time _hourEnd;
    NetUser(){
        _userName="";
        _password="";
        _name="";
        _hourBegin=Time();
        _hourEnd=Time();
    }
    NetUser(string userName,string password,string name,string hourBegin,string hourEnd){
        _userName=userName;
        _password=password;
        _name=name;
        _hourBegin=Time(hourBegin);
        _hourEnd=Time(hourEnd);
    }
    void inputNetUser(){
        getline(cin,_userName);
        getline(cin,_password);
        getline(cin,_name);
        string hourBegin,hourEnd;
        getline(cin,hourBegin);
        getline(cin,hourEnd);
        _hourBegin=Time(hourBegin);
        _hourEnd=Time(hourEnd);
    }
    void outputNetUser(){
        cout<<_userName<<" "<<_password<<" "<<_name<<" ";
        cout<<displayTimeFromMinute(_hourBegin.theTimeUse(_hourEnd));
    }
};

int main(){
    int number;cin>>number;cin.ignore();
    vector<NetUser> netUsers;
    for (int i=0;i<number;i++){
        NetUser netUser;
        netUser.inputNetUser();
        netUsers.push_back(netUser);
    }
    sort(netUsers.begin(),netUsers.end(),[](NetUser a,NetUser b){
        if (a._hourBegin.theTimeUse(a._hourEnd)<b._hourBegin.theTimeUse(b._hourEnd)){
            return false;
        }
        else if (a._hourBegin.theTimeUse(a._hourEnd)>b._hourBegin.theTimeUse(b._hourEnd)){
            return true;
        }
        else{
            return a._userName<b._userName;
        }
    });
    for (int i=0;i<netUsers.size();i++){
        netUsers[i].outputNetUser();
        cout<<endl;
    }
    return 0;

}