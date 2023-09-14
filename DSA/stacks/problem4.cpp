#include<iostream>
#include<stack>
using namespace std;
void pushLast(stack<int> &inpst,int size,int element){
	if(inpst.empty()){
		inpst.push(element);
		return;
	}
	int num=inpst.top();
	inpst.pop();
	
	//recursive call
	pushLast(inpst,size,element);
	inpst.push(num);
}
int main(){
	stack<int> s1;
	s1.push(9);
	s1.push(7);
	s1.push(5);
	s1.push(3);
	s1.push(1);
	int size=s1.size();
	cout<<"stack before addition"<<endl;
	stack<int> temp=s1;
	while(!temp.empty()){
		cout<<temp.top()<<" ";
		temp.pop();
	}
	cout<<endl;
	int element = 99;
	pushLast(s1,size,element);
	cout<<"stack after addition"<<endl;
	while(!s1.empty()){
		cout<<s1.top()<<" ";
		s1.pop();
	}
}
