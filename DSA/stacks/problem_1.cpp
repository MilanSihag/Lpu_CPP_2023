//create stack using LL
#include<iostream>
#include<stack>
using namespace std;
void reverseSen(string str){
	stack<string> s;
	for(int i=0;i<str.length();i++){
		string word="";
		while(str[i]!=' ' && i<str.length()){
			word+=str[i];
			i++;
		}
		s.push(word);
	}
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
	cout<<endl;
}
int main(){
	string s="hello, how are you?";
	reverseSen(s);
}
