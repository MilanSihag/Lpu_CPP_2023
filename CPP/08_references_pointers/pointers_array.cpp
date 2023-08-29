#include<iostream>
using namespace std;
int main(){
	int arr[10]={12,23,44,51};
	cout<<arr<<endl; // address of array where it is created = address of first element
	cout<<&arr[0]<<endl;
	cout<<arr[0]<<endl;
	cout<<*arr<<endl; //dereferencing array or accessing first element
	cout<<*(arr+1)<<endl; // shifting to next index and then dereferencing
	cout<<*arr+1<<endl; //dereferencing and then adding 1
	cout<<*(arr)+1<<endl;
	cout<<*(arr+2)<<endl;
}
