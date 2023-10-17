#include<iostream>
#include<set>
using namespace std;
/*
	SET - they store unique elements of same type in sorted manner.
	Immutable - we can add or remove elements from a set but we cann't change the values of existing elements.
	
*/
int main(){
	set<string> names = {"Milan","Sujal","Sunny","Deepak","Ayush"};
	for(auto i:names){
		cout<<i<<" ";
	}
}
