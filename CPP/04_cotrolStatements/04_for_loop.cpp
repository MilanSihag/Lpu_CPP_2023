#include<iostream>
using namespace std;
int main(){
//	for(int i=100;i>=1;i-=2){
//		cout<< i << " ";
//	}

	int row, column;
	cin >> row >> column;
//	for(int i=1; i<=row; i++){
//		for(int j=1; j<=column; j++){
//			cout<< "*";
//		}
//		cout << endl;
//	}

	for(int i=1; i<=row;i++){
		for(int j=1; j<=column; j++){
			if(i==1 || i==row || j==1 || j==column){
				cout << "*" << " ";
			}
			else{
				cout<< "  ";
			}
		}
		cout << endl;
	}
}
