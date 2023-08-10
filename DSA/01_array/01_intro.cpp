#include<iostream>
using namespace std;
int main(){
	//array stores multiple values of same type of elements that have
	// contiguous(adjacent) memory location in a single variable
//	int arr[5]={1,2,3,4,5};//array declare
//	char arrChar[5]={'a','b','c','d','e'};
//	cout<<"before changing 3rd position is: "<<arr[2]<<endl;
//	arr[2]=10;
//	cout<<"after changing : "<<arr[2]<<endl;


	string arr[4]={"Mercury","Venus","Earth","Mars"};
	int sizeArr=sizeof(arr)/sizeof(string);
	cout<<sizeArr;

//	for(int i=0;i<4;i++){
//		cout<<i<<" : "<<arr[i]<<endl;
//	}
	/* below code doesn't work in dev c++
	for(string i : arr){
		cout<< i<<endl;
	}    */
}
