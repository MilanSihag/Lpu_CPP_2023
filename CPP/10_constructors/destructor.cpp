#include<iostream>
using namespace std;
class Person{
	public:
		Person(){
			cout<<"Constructor invoked"<<endl;
		}
		//destructor is used to destroy the object of a class when the scope of object ends
		//it has the same name as the class and starts with ~
		//we can have one destructor in a class
		//destructor cannot have parameters and return type
		//we cannot define destructors in structs
		//we cannot overload and inherit dest.
		~Person(){
			cout<<"Destructor invoked"<<endl;
		}
};
int main(){
	Person p1,p2;
}
