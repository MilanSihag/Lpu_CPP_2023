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

int product(int num1,int num2){
	return num1*num2;
}

int maxNum(int num1,int num2,int num3){
	int maximum;
	if(num1>num2 && num1>num3){
		maximum=num1;
	}
	else if(num2>num1 && num2>num3){
		maximum = num2;
	}
	else{
		maximum=num3;
	}
	return maximum;
}

int minNum(int num1,int num2,int num3){
	int minimum;
	if(num1<num2 && num1<num3){
		minimum=num1;
	}
	else if(num2<num1 && num2<num3){
		minimum = num2;
	}
	else{
		minimum=num3;
	}
	return minimum;
}
int main(){

	int num1,num2,num3;
	cin>>num1>>num2>>num3;
	cout<<"maximum is: "<< maxNum(num1,num2,num3)<<" minimum is: "<<minNum(num1,num2,num3);
	
	//	printName();
//	printName("World");
//	fullName("Milan","Sihag");
//	personDetails("Milan",96);
}
