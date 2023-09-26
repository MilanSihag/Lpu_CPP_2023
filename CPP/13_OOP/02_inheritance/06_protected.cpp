#include<iostream>
using namespace std;
//protected -: like private members, protected members are inaccessible outside the class, however,
//   they can be accessed in derived class, friend classes/functions.
//We need protected members if we want to hide the data of class, but still want that data to be
//inherited by its derived class
class Animal{
	public:
		void eat(){
			cout<<"I can eat"<<endl;
		}
		void sleep(){
			cout<<"I can sleep"<<endl;
		}
	protected:
		string type;
};
class Dog: public Animal{
	public:
		void setType(string val){
			type=val;
		}
		void display(){
			cout<<"I am a "<<type<<endl;
		}
		void bark(){
			cout<<"I can bark"<<endl;
		}
};
int main(){
	Dog d1;
	d1.setType("pomerarian");
	d1.display();
}
