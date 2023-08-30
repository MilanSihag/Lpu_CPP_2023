#include<iostream>
using namespace std;
int fibnoci(int n){
	if(n==0||n==1) return n;
	else return fibnoci(n-1)+fibnoci(n-2);
}
int climbStairs(int n){
	//base case
	if(n==0||n==1||n==2) return n;
	
	//recursive relation
	return climbStairs(n-1)+climbStairs(n-2);
}
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<fibnoci(i)<<" ";
	}
	cout<<endl;
	cout<<"Stairs ways: "<<climbStairs(n)<<endl;

}
