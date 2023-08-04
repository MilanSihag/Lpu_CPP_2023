#include<iostream>
using namespace std;
void myMainFun(){
	cout<< "4"<<endl;
}
void myFun1(){
	myMainFun();
	cout<< "3"<<endl;
}
void myFun2(){
	cout<<"1"<<endl;
	myFun1();
	cout<<"5"<<endl;
}
int main(){
	myFun2();
	cout<<"2"<<endl;
}
