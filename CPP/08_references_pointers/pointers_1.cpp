#include<iostream>
using namespace std;

int main(){
//	int num=5;
//	int a=num;
//	cout<<"num before:"<<num<<endl;
//	a++;
//	cout<<"num after:"<<num<<endl;
//
//	int *p=&num;
//	cout<<"before:"<<num<<endl;
//	(*p)++;
//	cout<<"after:"<<num<<endl;
//	
//	//copy a pointer
//	int *q = p;
//	cout<< p << " - "<< q<<endl;
//	cout<<*p<< " - "<< *q<<endl;

	int i =5;
	int *p = &i;
	cout<< ++(*p)<<endl;
	cout<<"before: "<<p<<endl;
	p++; // only the address value changes not the original value of i
	cout<<"after: "<<p<<endl;
	
}
