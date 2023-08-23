#include<iostream>
using namespace std;

//Null pointers- which is pointing to nothing, if we don't have address to be assigned to a pointer,
// we can use null

int main(){
//	int *p; // contains garbage value
//	int *p = NULL; //null pointer
//	cout<<p<<endl;

// double pointer- we can create a pointer that in turn may point to data or another pointer
//	int a = 5;
//	int *p =&a;
//	int **q = &p; //creating double pointer
//	cout<<&a<<endl;
//	cout<<p<<endl;
//	cout<<*q<<endl;
//	
//	cout<<endl;
//	cout<<&p<<endl;
//	cout<<q<<endl;
//	
//	cout<<endl;
//	cout<<a<<endl;
//	cout<<*p<<endl; //dereferencing of pointer
//	cout<<**q<<endl; //dereferencing of double pointer
	
//void pointers- they are not type specific(generic pointer). A void pointer can hold
// an address of any type.
// void pointers cannot be dereferenced, it can be done using typecasting the void pointer
	double i =5;
	void *ptr=&i;

//wild pointers- when a pointer is declared but not initialized. They point at a random memory location
	int *p;

//dangling pointer- a pointer pointing towards a memory location that has been deleted

}
