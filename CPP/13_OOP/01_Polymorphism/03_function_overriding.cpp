#include<iostream>
using namespace std;
class Base{
	public:
		virtual void print(){
			cout<<"From base"<<endl;
		}
};
class Derived : public Base{
	public:
		void print(){
			cout<<"From derived"<<endl;
		}
};
int main(){
	Derived d1;
//	d1.print();
//	Base b2;
//	b2.print();
	Base* b1=&d1;
	b1->print();
}
/*
	we have same function in base class as well as derived class, when we call the function using
	object of derived class, the function of derived class is executed instead of base class.
	When we call print() using d1, it overrides the print() of base class.
	It's runtime polymorphism because the function call is not resolved by the compiler, but it is
	resolved at runtime instead.
*/
