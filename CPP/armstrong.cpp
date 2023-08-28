#include<iostream>
#include<cmath>
using namespace std;
inline bool isArmstrong(int number){
	int sum=0,r,origNum=number,digits=0;
	while(number>0){
		number/=10;
		digits++;
	}
	number=origNum;
	while(number>0){
		r=number%10;
		sum+=pow(r,digits);
		number/=10;
	}
	return sum==origNum;
}
inline void printFac(int n){
	for(int i=1;i<=n;i++){
		if(n%i==0)
		cout<<i<<" ";
	}
}
int main(){
	int n;
	cin>>n;
//	cout<<isArmstrong(n);
	if(isArmstrong(n)){
		cout<<n<<"is armstrong."<<endl;
		printFac(n);
	}
	else
	cout<<n<<"is not armstrong";
}
