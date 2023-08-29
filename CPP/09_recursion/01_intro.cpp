#include<iostream>
using namespace std;
//we need a base case to terminate recursion
//and a recursive relation to perform recusion
int factorial(int n){
	//base case
	if(n==0) return 1;
	
//	int smallProb = factorial(n-1);
//	int bigProb = n*smallProb;
//	return bigProb;
	 
	 return n*factorial(n-1);
}
int power(int num,int n){
	//base case
	if(n==0) return 1;
	
	return num*power(num,n-1);
}
int main(){
	int n;
	cin>>n;
	if(n==0 || n==1){
		cout<<"Factorial of given number is: 1"<<endl;
	}
	else if(n>1){
	cout<<"Factorial of given number is: "<<factorial(n)<<endl;
	}
	else
	cout<<"Factorial of negative number is not possible."<<endl;
	
	int num,pow;
	cin>>num>>pow;
	cout<<"Power output of "<<num<<" number is: "<<power(num,pow);
}
