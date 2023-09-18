//Inheritance :- it is a process in which one object acquires all the properties and behaviour of it's
//parent object automatically. in such a way we can reuse, extend or modify the attributes and
// behaviour which are defined in other class.
//advantage- reusability
#include<iostream>
using namespace std;
//single level- when one class inherits another class
class Animal{
	public:
		void eat(){
			cout<<"Animal is eating"<<endl;
		}
		void sleep(){
			cout<<"Animal is sleeping"<<endl;
		}
};
class Dog : public Animal{
	public:
		void bark(){
			cout<<"Dog is barking"<<endl;
		}
};
int main(){
	Dog d1;
	d1.bark();
	d1.eat();
	
}
