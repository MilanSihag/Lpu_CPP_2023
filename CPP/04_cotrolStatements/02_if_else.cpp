#include<iostream>
using namespace std;
int main(){
	int num;
	cout << "Enter marks: ";
	cin >> num;
	 if(num<0 || num>100){
	 	cout<< "Invalid input" << endl;
	 }
	 else if(num<=100 && num>90){
	 	cout << "Grade A" <<endl;
	 }
	  else if(num<=90 && num>80){
	 	cout << "Grade B" <<endl;
	 }
	  else if(num<=80 && num>70){
	 	cout << "Grade C" <<endl;
	 }
	  else if(num<=70 && num>60){
	 	cout << "Grade D" <<endl;
	 }
	  else if(num<=60 && num>50){
	 	cout << "Grade E" <<endl;
	 }
	 else{
	 	cout << "FAil" << endl;
	 }
}
