#include<iostream>
using namespace std;
class Animal{
	string type;
	public:
		Animal() : type("Animal") {};
//	Animal(){
//		type="Animal";
//	}
		virtual string getType(){
			return type;
		}
};
class Dog: public Animal{
	string type;
	public:
		Dog() : type("Dog") {};
		string getType() override{
			return type;
		}
};
class Cat : public Animal{
	string type;
	public:
		Cat() : type("Cat") {};
		string getType() override{
			return type;
		}
};
void print(Animal* obj){
	cout<<"Animal type: "<<obj->getType()<<endl;
}
int main(){
	Animal* dog1 = new Dog();
	Animal* ani1 = new Animal();
	Animal* cat1 = new Cat();
	print(ani1);
	print(dog1);
	print(cat1);
	
	delete dog1,ani1,cat1;
}
