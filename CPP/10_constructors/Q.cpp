#include<iostream>
using namespace std;
// Write a C++ class called "Employee" that has three private member
// variables: "name", "salary", and "employeeCode". The class should have a constructor that
// initializes these member variables and a public member function called "displayInfo" that
// prints out the employee's name, salary, and employeeCode.
class Employee{
	string name;
	int salary;
	int employeeCode;
	public:
		Employee(){
			
		}
		Employee(string n,int s,int ec){
			name=n;
			salary=s;
			employeeCode=ec;
		}
		void displayInfo(){
			cout<<"Name : "<<name<<endl;
			cout<<"Salary : "<<salary<<endl;
			cout<<"employee code : "<<employeeCode<<endl;
		}
};
int main(){
	Employee e1("Milan",2200,123);
	e1.displayInfo();
}
