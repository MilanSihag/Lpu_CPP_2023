#include<iostream>
using namespace std;
/*a virtual function is a member function in the base class that we expect to redefine
in the derived class.
A virtual is used in base class in order to ensure that the function is overridden.
This especially applies to cases where a pointer of base class points to an object of derived class.

The override identifier specifies the member functions of the derived class that overrides the
member function of the base class.

When using virtual functions it is possible to make mistake while declaring a member function of
derived class. using OVERRIDE specifier prompts the compiler to display error.
POSSIBLE ERRORS:- function with incorrect spelling, names, diff parameters, diff return types, etc

*/
class Base{
	public: 
	virtual void print(){
		cout<<"Base"<<endl;
	}
};
class Derived : public Base{
	public:
		void print() override{
			cout<<"Derived"<<endl;
		}
};
int main(){
	Derived d1;
	Base* b1=&d1;
	b1->print();
}
