#include<iostream>
using namespace std;
class Node{
	public:
		
		int data;
		Node* next;
		Node* prev;
	
		Node(int val){
			data = val;
			next = NULL;
			prev = NULL;
		}
};
void insertionAtHead(Node* &head, int);
void insertionAtTail(Node* &head, int val){
	Node* n = new Node(val);
	if(head == NULL){
		insertionAtHead(head,val);
		return;
	}
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	temp->next = n;
	n->prev = temp;
}
void insertionAtHead(Node* &head, int val){
	Node* n = new Node(val);
	n->next = head;
	if(head!=NULL){
	head->prev = n;
	}
	head=n;
}
void displayRev(Node* head){
	Node* temp = head;
	while(temp->next != NULL){
		temp = temp->next;
	}
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->prev;
	}
	cout<<"NULL"<<endl;
}
void display(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
void deletion(){
	
}
int main(){
	Node* head = NULL;
	insertionAtTail(head,1);
	insertionAtTail(head,2);
	insertionAtTail(head,3);
	display(head);
	displayRev(head);
}
