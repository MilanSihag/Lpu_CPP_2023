#include<iostream>
using namespace std;
class Base{
	public:
		Base(){
			cout<<"Constructor of base class"<<endl;
		}
		
		virtual ~Base(){
			cout<<"Destructor of base class"<<endl;
		}
};
class Child: public Base{
	public:
		Child(){
			cout<<"Constructor of child class"<<endl;
		}
		~Child(){
			cout<<"Destructor of child class"<<endl;
		}
};
int main(){
	Child* ch = new Child();
	Base* bs = ch;
	delete bs;
	
}
//we have used one parent class(Base) and one derived class(Child) inside which both constructor
//and destructor are defined. Deleting object of derived class using pointer of parent class shows 
//undefined behaviour because it doesnot have virtual destructor.

//So when we delete object of derived class, it invokes the base class's destructor but the child
//class's destructor is not invoked. As seen in logs, the destructor of child class is not invoked
//becasue the base class pointer can only remove the base class's destructor which causes the problem
//of memory leak in the program.
