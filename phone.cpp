#include<iostream>
using namespace std;
void check(string num){
    if(num.length()!=12){
        cout<<"No, the phone number is not valid.";
        return;
    }
    if(num[3]=='-'&&num[7]=='-'){
        cout<<"Yes, the phone number is valid."<<endl;
        num=(num.substr(0,3)+num.substr(4,3)+num.substr(8));
        cout<<num;
    }
    else cout<<"No, the phone number is not valid.";
}
int main(){
    string s;
    cin>>s;
    check(s);
}
