#include<iostream>
using namespace std;
string rev(string str,int s,int e){
	if(s>=e){
//		cout<<str;
		return str;
	}
	swap(str[s],str[e]);
	rev(str,++s,--e);
}
string replace(string str,int s,int e){
	if(s>=e) return "\0";
	if(str[s]=='p'&&str[s+1]=='i'){
		s+=2;
		return "3.14"+replace(str,s,e);
	}
	else{
		return str[s]+replace(str,++s,e); 
	}
}
int main(){
	string s1="Helloi";
	int len=s1.length();
//	string res1=rev(s1,0,len-1);
//	cout<<res1<<endl;
	string s2="pippipppi";
	int n=s2.length();
	string result=replace(s2,0,n-1);
	cout<<result<<endl;
}
