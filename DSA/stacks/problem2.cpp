#include<iostream>
#include<stack>
using namespace std;
bool balanced(string s){
	stack<char> st;
	bool ans=true;
	for(int i=0;i<s.size();i++){
		if(s[i]=='('||s[i]=='{'||s[i]=='['){
			st.push(s[i]);
		}
		else if(s[i]==')'){
			if(!st.empty()&&st.top()=='('){
				st.pop();
			}
			else{
				ans=false;
				break;
			}
		}
		else if(s[i]=='}'){
			if(!st.empty()&&st.top()=='{'){
				st.pop();
			}
			else{
				ans=false;
				break;
			}
		}
		else if(s[i]==']'){
			if(!st.empty()&&st.top()=='['){
				st.pop();
			}
			else{
				ans=false;
				break;
			}
		}
	}
	if(!st.empty()) return false;
	return true;
}
int main(){
	string s;
	cin>>s;
	if(balanced(s)==true){
		cout<<"brackets are balanced"<<endl;
	}
	else cout<<"brackets are not balanced"<<endl;
	
}
