#include<iostream>
using namespace std;
bool isPresent(int arr[][4],int target,int row,int col){
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			if(arr[i][j]==target){
				return true;
			}
		}
	}
	return false;
}
void printSum(int arr[][4],int row,int col){
	int sum=0;
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
				sum+=arr[i][j];
			}
		}
	
	cout<<"Sum of array elements: "<<sum<<endl;
}
int main(){
	int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};
	int target;
	cin>>target;
	if(isPresent(arr,target,3,4)) cout<<"Present"<<endl;
	else cout<<"Not present"<<endl;
	printSum(arr,3,4);
}
