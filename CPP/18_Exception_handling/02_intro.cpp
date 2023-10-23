#include<iostream>
using namespace std;
void srt(){
	int n;
	cout<<"Enter a num: ";
	cin>>n;
	if(n>0){
		cout<<"Square is: "<<n*n<<endl;
	}
	else{
		throw n;
	}
}
int main(){
	try{
		srt();
	}
	catch(int e){
		cout<<"Catch the error"<<endl;
	}
}
