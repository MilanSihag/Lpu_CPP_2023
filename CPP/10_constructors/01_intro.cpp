#include<iostream>
using namespace std;
//a constructor is a special type of member function that is called automatically when an object
// is created. Constuctor name is same as class name
class student{
	public:
	string name;
	int age;
	string gender;
	//default constructor
	//it has no parameters however input arguments are available for parametrized and copy const.
	student(){
		cout<<"Default constructor invoked"<<endl;
	}
	//parametrized constructor
	student(string myName,int myAge){
		cout<<"Parameterized constructor is called"<<endl;
		name=myName;
		age=myAge;
	}
	
	void display(){
		cout<<"Name : "<<name<<endl;
		cout<<"Age : "<<age<<endl;
	}
};

int main(){
	//constuctors will be invoked acc.to signature matched
	//if no parameter is passed with object then default const. will be called
	//every time an object is created a contructor is called
	student s1("Milan",21);
	student s2;
	cout<<s1.name<<endl;
	cout<<s1.age<<endl;
	student s3("sujal",20);
	s3.display();
}
