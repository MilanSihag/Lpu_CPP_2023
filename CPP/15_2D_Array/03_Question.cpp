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
void maxSum(int arr[][4],int row,int col){
	int maximum=0,index=0;
	for(int i=0;i<row;i++){
		int sum=0;
		for(int j=0;j<col;j++){
				sum+=arr[i][j];
			}
			if(sum>maximum){
				maximum=sum;
				index=i;
			}
		}
		cout<<"Maximum sum of row is: "<<maximum<<" and Row is: "<<index+1<<endl;
		
}
void wave(int arr[][3],int row,int col){
	for(int i=0;i<col;i++){
		if(i%2==0){
			for(int j=0;j<row;j++){
				cout<<arr[j][i]<<" ";
			}
		}
		else{
			for(int j=row-1;j>=0;j--){
				cout<<arr[j][i]<<" ";
			}
		}
	}
}
void spiral(int arr[][3],int row,int col){
	int topRow = 0,bottomRow = row-1,leftCol = 0,rightCol = col-1;
	while(topRow<=bottomRow && leftCol<=rightCol){
		//print top row
		for(int i=leftCol;i<=rightCol;i++){
			cout<<arr[topRow][i]<<" ";
		}
		topRow++;
		//print right col
		for(int i=topRow;i<=bottomRow;i++){
			cout<<arr[i][rightCol]<<" ";
		}
		rightCol--;
		//print bottom row
		for(int i=rightCol;i>=leftCol;i--){
			cout<<arr[bottomRow][i]<<" ";
		}
		bottomRow--;
		//print left col
		for(int i=bottomRow;i>=topRow;i--){
			cout<<arr[i][leftCol]<<" ";
		}
		leftCol++;
	}
}
int main(){
	int arr[3][3] = {1,2,3,4,5,6,7,8,9};
//	int target;
//	cin>>target;
//	if(isPresent(arr,target,3,4)) cout<<"Present"<<endl;
//	else cout<<"Not present"<<endl;
//	printSum(arr,3,4);
//	maxSum(arr,3,4);
//	wave(arr,3,3);
	spiral(arr,3,3);
}
