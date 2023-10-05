#include<iostream>
using namespace std;
string rev(string str,int s,int e){
	if(s>=e){
		return str;
	}
	swap(str[s],str[e]);
	rev(str,++s,--e);
}
string replace(string str,int s,int e){
	if(s>=e) return str;
	if(str[s]=='p'&&str[s+1]=='i'){
		str+=substr(0,)'3.14';
	}
}
int main(){
	string s="Hello";
	cout<<rev(s,0,4);
//	swap(s[0],s[4]);
//	cout<<s;
}
