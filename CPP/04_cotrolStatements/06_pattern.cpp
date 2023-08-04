#include<iostream>
using namespace std;
int main(){
	int row,col;
	cin>>row>>col;
	int k=1;
	for(int i=1;i<=row;i++){
		for(int j=col;j>=1;j--){
			cout<< k<< " ";
			k++;
		}cout<<endl;
	}
}
