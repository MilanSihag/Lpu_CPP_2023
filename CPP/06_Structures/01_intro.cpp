#include<iostream>
using namespace std;

struct student{
	string name;
	int rollNo;
	float marks;
};
int main(){
	student stud1,stud2;
	stud1.name="Milan";
	stud1.rollNo=31;
	stud1.marks=85.0;
	stud2.name="Ananya";
	stud2.rollNo=20;
	stud2.marks=60.5;
	
	cout<<stud2.name<<" "<<stud1.name<<endl;
}
