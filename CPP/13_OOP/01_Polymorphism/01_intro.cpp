#include<iostream>
using namespace std;
//polymorphism-> poly=many, morphs=forms
//same entity(function or operator) behaves differently in diff scenarios
//function overloading is a compile time polymosrphism.
//compiler knows which function to execute before the program is compiled.
int sum(int n1,int n2){
	return n1+n2;
}
float sum(float n1,int n2){
	return n1+n2;
}
int main(){
	cout<<sum(12,2)<<endl;
}
