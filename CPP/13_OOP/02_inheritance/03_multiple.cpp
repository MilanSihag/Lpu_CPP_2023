//multiple inheritance-: when one child class inherits from two or more classes.
#include<iostream>
using namespace std;
class A{
	public:
		int a;
		void getA(int val){
			a=val;
		}
};
class B{
	public:
		int b;
		void getB(int val){
			b=val;
		}
};
class C : public A, public B{
	public:
		void get(int val){
			A::getA(val);
		}
		void display(){
			cout<<"Value of a is: "<<a<<" and value of b is: "<<b<<endl;
			cout<<"Sum of a and b: "<<a+b<<endl;
		}
};

int main(){
	C c1;
	c1.get(12);
	c1.getB(4);
	c1.display();
}
