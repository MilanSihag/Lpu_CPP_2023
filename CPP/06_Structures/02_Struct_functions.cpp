#include<iostream>
using namespace std;

struct Employee{
	int age;
	float salary;
	int employeeId;
};

void displayInfo(Employee emp){
	cout<<"Age is: "<<emp.age<<endl;
	cout<<"Salary is: "<<emp.salary<<endl;
	cout<<"Employee ID is: "<<emp.employeeId<<endl;
}
int main(){
	Employee e1,e2;
	e1.age=22;
	e1.salary=80;
	e1.employeeId=11;
	e2.age=32;
	e2.employeeId=22;
	e2.salary=100;
	
	displayInfo(e1);
	displayInfo(e2);
}
