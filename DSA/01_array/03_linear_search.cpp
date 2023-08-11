#include<iostream>
using namespace std;
bool linearSearch(int arr[],int size,int key){
	for(int i=0;i<size;i++){
		if(arr[i]==key) return true;
	}
	return false;
}
int main(){
	int arr[10]={11,12,22,45,656,45,34,43,54,10};
	int key;
	cin>>key;
	bool found=linearSearch(arr,10,key);
	if(found) cout<<"key found";
	else cout<<"not found";
	
	//HW:- check for even and odd number using 2 methods
}
