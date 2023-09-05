#include<iostream>
#include<vector>
using namespace std;
//vectors are used to store elements of similar datatype.
//unlike array size of vector can grow dynamically.

int main(){
	vector<int> v1;
	v1 = {1,2,3,4,5};
	for(auto i : v1){
		cout<<i<<" ";
	}cout<<endl;
	//add element
	v1.push_back(6);
	//accesing element
	cout<<"Element at index 1 in vector is: "<<v1.at(1)<<endl;
	//change
	v1.at(2)=22;
	//delete
	v1.pop_back();//delets last element
}
