//multi-level inheryance -: when one class inherits another class which further inherited 
//by another class

#include<iostream>
using namespace std;
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
class BabyDog : public Dog{
	public:
		void cute(){
			cout<<"Baby Dog is cute"<<endl;
		}
};

int main(){
	BabyDog b1;
	b1.eat();
	b1.bark();
	b1.cute();
}
