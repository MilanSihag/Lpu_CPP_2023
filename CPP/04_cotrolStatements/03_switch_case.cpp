#include<iostream>
using namespace std;
int main(){
	int num;
	cout<< "Enter 1 or 2 : ";
	cin >> num;
	switch(num){
		case 1:
			cout<<"Num is 1" <<endl;
			break;
		case 2:
			cout<<"num is 2" <<endl;
			break;
		default:
			cout<< "enter valid number" << endl;
			break;
	}
}
