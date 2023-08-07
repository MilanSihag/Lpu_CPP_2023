#include<iostream>
using namespace std;
//void printName(string name = "Hello"){
//	cout<< "The name is : "<<name<<endl;
//}
//void fullName(string firstName,string lastName){
//	cout<<"First name: "<<firstName<<" last name: "<<lastName<<endl;
//}
void personDetails(string name,int marks){
	cout<<"My name is "<<name<<" and i got "<<marks<<" in 12th"<<endl;
}
int main(){
//	printName();
//	printName("World");
//	fullName("Milan","Sihag");
	personDetails("Milan",96);
}
