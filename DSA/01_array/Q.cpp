#include<iostream>
using namespace std;
int main(){
	int arr[5];
	for(int i=0;i<5;i++){
		cout<<"Enter "<<i+1<<" number : ";
		cin>> arr[i];
	}
	cout<<"The numbers are: "<<endl;
	for(int i=0;i<5;i++){
		cout<< arr[i]<<" ";
	}
	cout<<endl;
	int sum=0;
	for(int i=0;i<5;i++){
		sum+=arr[i];
	}
	cout<<"The sum of given numbers is : "<<sum<<endl;
	int sizeArr=sizeof(arr)/sizeof(int);
	int average = sum/sizeArr;
	cout<<"The average is : "<<average<<endl;
}
