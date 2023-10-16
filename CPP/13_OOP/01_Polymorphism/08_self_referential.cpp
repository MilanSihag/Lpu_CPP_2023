#include<iostream>
using namespace std;
/*
	those classes/struct that contain one or more than one pointer as their which will
	be pointing to the structure of the same type.
	
	example: linkedlist,trees,etc.
	
*/
//self referential class with single link
class Node{
	public:
		int data;
		Node* next;
};
int main(){
	Node obj1;
	obj1.data=1;
	obj1.next=NULL;
	
	Node obj2;
	obj2.data=2;
	obj2.next=NULL;
	
	obj1.next=&obj2;
	cout<<obj1.next->data;
}
