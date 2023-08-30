#include<iostream>
using namespace std;
class Node{
	public:
	int data;
	Node* next;
	
	Node(int val){
		data=val;
		next=NULL;
	}
};
void insertTail(Node* head,int val){
	Node* n = new Node(val);
	Node* temp=head;
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=n;
	n->next=head;
}
void insertionAtHead(Node* head,int val){
	
}
void deletion(){
	
}

bool isCircular(Node* head){
	Node* temp =head->next;
	while(temp!=NULL && temp==head){
		temp=temp->next
	}
	if(temp==head) return true;
	
	return false;
}
int main(){
	
}
