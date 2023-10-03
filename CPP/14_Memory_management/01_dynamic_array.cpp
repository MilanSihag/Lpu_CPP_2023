#include<iostream>
using namespace std;
//new [datatype] returns an address which we store in a pointer, to get the access of that data;
//pointer is created in stack memory and 'new' is created in heap memory.
//stack memory is smaller than heap memory.
int getSum(int* arr,int n){
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=arr[i];
	}
	return sum;
}
int main(){
	int n;
	cin>>n;
	//vatiable size array
	int* arr=new int[n]; //memory is allocated at runtime
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<"Sum of array is: "<<getSum(arr,n)<<endl;
	delete []arr; //we need to delete it manually otherwise heapoverflow
}
