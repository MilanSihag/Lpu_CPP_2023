#include<iostream>
#include<stack>
using namespace std;
void delMid(stack<int> &inpst,int count,int size){
	if(inpst.empty()||count==size/2){
		inpst.pop();
		return;
	}
	int num=inpst.top();
	inpst.pop();
	
	//recursive call
	delMid(inpst,count+1,size);
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
	cout<<"stack before deletion"<<endl;
	stack<int> temp=s1;
	while(!temp.empty()){
		cout<<temp.top()<<" ";
		temp.pop();
	}
	cout<<endl;
	delMid(s1,0,size);
	cout<<"stack after deletion"<<endl;
	while(!s1.empty()){
		cout<<s1.top()<<" ";
		s1.pop();
	}
}
