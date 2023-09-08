#include<iostream>
using namespace std;
class Stack{
	int* arr;
	int top;
	int size=6;
	
	public:
		Stack(){
			arr = new int[size];
			top = -1;
		}
		void push(int val){
			if(top==size-1){
				cout<<"stack overflow"<<endl;
				return;
			}
			top++;
			arr[top]=val;
		}
		void pop(){
			if(top==-1){
				cout<<"no element to pop"<<endl;
				return;
			}
			top--;
		}
		int Top(){
			if(top==-1){
				cout<<"no element in stack"<<endl;
				return -1;
			}
			return arr[top];
		}
		bool empty(){
			return top==-1;
		}
};
int main(){
	Stack s1;
	s1.push(11);
	s1.push(12);
	cout<<s1.Top()<<endl;
	s1.pop();
	s1.pop();
	s1.pop();
	cout<<s1.Top()<<endl;
}
