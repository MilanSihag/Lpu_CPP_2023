#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
//infix -> operand,operator,operand eg. ((4*2)+3)
//prefix/pollish -> operator,operand,operand eg. +*423
//postfix/reverse polish -> operand,operand,operator eg. 42*3+

/*
pefix->infix -+7*45+20 (ans is 25) start from right hand side, then push in stack if operand is there, pop last
        two element and perform operation if operator arrives and push back the result.
*/
int prefixEval(string s){
	stack<int> st;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]>='0' && s[i]<='9'){
			st.push(s[i]-'0');
		}
		else{
			int op1=st.top();
			st.pop();
			int op2=st.top();
			st.pop();
			switch(s[i]){
				case '+':
					st.push(op1+op2);
					break;
				case '-':
					st.push(op1-op2);
					break;
				case '*':
					st.push(op1*op2);
					break;
				case '/':
					st.push(op1/op2);
					break;
				case '^':
					st.push(pow(op1,op2));
					break;
			}
		}
	}
	return st.top();
}
int postEval(string s){
	stack<int> st;
	for(int i=0;i<s.length();i++){
		if(s[i]>='0' && s[i]<='9'){
			st.push(s[i]-'0');
		}
		else{
			int op2=st.top();
			st.pop();
			int op1=st.top();
			st.pop();
			switch(s[i]){
				case '+':
					st.push(op1+op2);
					break;
				case '-':
					st.push(op1-op2);
					break;
				case '*':
					st.push(op1*op2);
					break;
				case '/':
					st.push(op1/op2);
					break;
				case '^':
					st.push(pow(op1,op2));
					break;
			}
		}
	}
	return st.top();
}
int main(){
	string s="-+7*45+20";
	cout<<prefixEval(s)<<endl;
	string s2="42*3+";
	cout<<postEval(s2)<<endl;
}
