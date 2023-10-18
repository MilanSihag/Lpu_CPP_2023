#include<iostream>
#include<set>
using namespace std;
/*
	SET - they store unique elements of same type in sorted manner.
	Immutable - we can add or remove elements from a set but we cann't change the values of existing elements.
	
*/
int main(){
//	set<int,greater<int>> myset = {1,5,2,13,8};
//	set<string> names = {"Milan","Sujal","Sunny","Deepak","Ayush"};
//	for(auto i:names){
//		cout<<i<<" ";
//	}
	set<int> mySet;
	mySet.insert(1);
	mySet.insert(4);
	mySet.insert(2);
	mySet.insert(3);
	cout<<"Set before deletion: ";
	for(auto val:mySet){
		cout<<val<<" ";
	}
	mySet.erase(4);
	cout<<endl<<"set after deletion: ";
	for(auto val:mySet){
		cout<<val<<" ";
	}
	mySet.clear();
	cout<<endl<<"Cleared set: ";
	for(auto val:mySet){
		cout<<val<<" ";
	}
}
