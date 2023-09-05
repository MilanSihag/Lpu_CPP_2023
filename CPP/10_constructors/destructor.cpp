#include<iostream>
using namespace std;
class Person{
	public:
		Person(){
			cout<<"Constructor invoked"<<endl;
		}
		//destructor is used to destroy the object of a class when the scope of object ends
		//it has the same name as the class and starts with ~
		~Person(){
			cout<<"Destructor invoked"<<endl;
		}
};
int main(){
	Person p1;
	Person p2;
}
