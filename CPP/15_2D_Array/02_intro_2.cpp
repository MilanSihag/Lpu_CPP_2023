#include<iostream>
using namespace std;
int main(){
	/*
	int n;
	cin>>n;
	int** arr = new int*[n]; //rows
	for(int i=0;i<n;i++){
		arr[i] = new int[n]; //creating columns
	}
	//input
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	//output
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	*/
	int row,col;
	cin>>row>>col;
	int** arr = new int*[row]; //rows creation
	//col creation
	for(int i=0;i<row;i++){
		arr[i] = new int[col];
	}
	
	//input
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cin>>arr[i][j];
		}
	}
	//output
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}
	//releasing the memory
	for(int i=0;i<row;i++){
		delete []arr[i];
	}
	delete []arr;
}
