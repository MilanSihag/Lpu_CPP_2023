#include<iostream>
using namespace std;
//operator overloading
//we can overload an operator as long as we are operating on user defined types like objects and structures
//we cannot use operator overloading for basic types such as int, float, etc.
//it's a compile time polymorphism.
class Count{
	int value;
	public:
		Count(){
			value=10;
		}
		void operator ++(){
			value=value+2;
		}
		void display(){
			cout<<"count: "<<value<<endl;
		}
};
int main(){
	Count c1;
	++c1;
	c1.display();
	int i=12;
	cout<<++i<<endl;//here ++ is working normal
}
