#include<iostream>
using namespace std;
int main(){
	int a=5;
	cout<<&a<<endl;// address of 'a' variable
	int *ptr = &a; // size of pointer doesn't depends upon type of pointer
	cout<< ptr<<endl;// address of 'a' variable
	cout<< *ptr<<endl;//dereferencing the pointer
}
