#include<iostream>
using namespace std;
class Number{
	int n;
	public:
		Number(int n){ //for basic to class type
			this->n=n;
		}
		void print(){
			cout<<n<<endl;
		}
		operator int(){ //for class to basic type
			return n;
		}
};
int main(){
	//basic to class type conversion
/*When we create object using the vaiables of primary data types then it is called basic to class
type conversion. generally we use single argument constructor to perform type conversion from
basic to class type.
*/
	Number num = 10;
	num.print();
	
	//class type to basic type
/*
When we assign an object to a primitive data type variable then it is known as class type to basic
type conversion. To perform this type of conversion we have to define casting operator function.
this casting operator must be a member function of class.
this function cannot have any return type.
this function cannot take any parameter.
*/
	int a = num;
	cout<<a<<endl;
}
