#include<iostream>
using namespace std;
int add(int a,int b){
	return a+b;
}
int add(int a,int b,int c){
	return a+b+c;
}
int main(){
	//function will be called acc.to signature(parameters)
	cout<<add(2,3)<<endl<<add(2,3,4);
}
