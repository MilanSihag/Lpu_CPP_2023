#include<iostream>
#include<set>
#include<unordered_set>
using namespace std;
//STL - standard template library
//Type of STL container:
/*
1. Sequential container:- it allows us to store elements that can be accessed in sequential order.
	eg.list,array,vector 
2. Associative container:- it allows us to store elements in sorted order, the order doesn't depend
	upon when element is inserted.It also ignores duplicate elements. eg.set,map,multiset,multimap
3. Unordered Associative container:- it provides a unsorted version of associative container.
	eg.unordered set,unordered map,unordered multiset,unordered multimap,
*/
int main(){
	set<int> num = {1,10,7,9,10};
	for(auto i : num){
		cout<<i<<" ";
	}cout<<endl;
	unordered_set<int> n = {1,23,4,6};
	for(auto i : n){
		cout<<i<<" ";
	}
}
