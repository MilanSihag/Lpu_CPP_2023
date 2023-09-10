// You are using GCC
#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    getline(cin,s);
    int i=0;
    string acr;
	acr+=toupper(s[i]);
    i++;
    while(s[i]!='\0'){
        if(s[i-1]==' '){
            acr+=toupper(s[i]);
        }
        i++;
    }
    cout<<acr<<endl;
}
