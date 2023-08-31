#include<bits/stdc++.h>
using namespace std;

void generatePrimeInRange(int &n,int& m){
	if(n==1||n==0){
		n=2;
	}
	for(int i=n;i<=m;i++){
		bool x=false;
		for(int j=2;j<i;j++){
			if(i%j==0){
				x=true;
				break;	
			}	
		}
	if(x==false)
	cout<<i<<" ";

	}

	
}


int main(){
	int m,n;
	cin>>n>>m;
	generatePrimeInRange(n,m);
}
