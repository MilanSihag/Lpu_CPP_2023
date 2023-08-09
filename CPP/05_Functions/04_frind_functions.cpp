#include<iostream>
using namespace std;
//forward declaration
class B;
class A{
	int data;
	
	public:
		void setValue(int value){
			data=value;
		}
	friend void add(A obj1,B);
	
};
class B{
	int data;
	
	public:
		void setValue(int value){
			data=value;
		}
	friend void add(A obj1,B);
	
};
void add(A obj1,B obj2){
	cout<<"The sum is: "<<obj1.data+obj2.data<<endl;
}
int main(){
	A a1;
	B b1;
	b1.setValue(29);
	a1.setValue(10);
	add(a1,b1);
}
