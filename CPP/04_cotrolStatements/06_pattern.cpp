#include<iostream>
using namespace std;
int main(){
//	int row,col;
//	cin>>row>>col;
//	int k=1;
//	for(int i=1;i<=row;i++){
//		for(int j=col;j>=1;j--){
//			cout<< k<< " ";
//			k++;
//		}cout<<endl;
//	}
	int input;
	cin>>input;
	int i=1;
	while(i<=input){
		int j=1;
		while(j<=i){
			cout<<"*";
			j++;
		}i++; cout<<endl;
	}
}
