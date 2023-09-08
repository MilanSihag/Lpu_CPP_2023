#include<iostream>
#include<stack>
using namespace std;
int main(){
	stack<int> s;
	//push
	s.push(1); //this element will be at bottom level
	s.push(2);
	s.push(3);
	cout<<s.top()<<endl;
	//pop top element
	s.pop();
	cout<<s.top()<<endl;
	//size
	cout<<"Size: "<<s.size()<<endl;
	//checking for empty
	if(s.empty()) cout<<"Empty"<<endl;
	else cout<<"Not Empty"<<endl;
}
