// You are using GCC
#include<iostream>
#include<string>
using namespace std;
void rep(string &org,string tobe,string r){
    int pos=org.find(tobe);
    int len=r.length();
    org=org.substr(0,pos)+r+org.substr(pos+len);
    cout<<"Modified string after replace: "<<org<<endl;
}
void sub(string org,int p,int s){
    string sstr=org[p,p+s-1];
    cout<<"Substring: "<<sstr<<endl;
}
void rsize(string &org,int s){
    org=org.substr(0,s);
    cout<<"Resized string: "<<org;
}
int main(){
    string org,tobe,r;
    int p,s,size;
    getline(cin,org);
    cin>>tobe;
    cin>>r;
    cin>>p;
    cin>>s;
    cin>>size;
    rep(org,tobe,r);
    sub(org,p,s);
    rsize(org,size);
}
