#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node *next;
		//constructor method will be called automatically when object is created
		//it's name is same as class name
		//it doesn't have any return type
		Node(int val){
			data = val;
			next = NULL;
		}
};
void insertAtTail(Node* &head, int val){
	Node* n = new Node(val); //creating node
	if(head==NULL){
		head=n;
		return;
	}
	Node* temp = head;
	while(temp->next !=NULL){
		temp= temp->next;
	}
	temp->next = n;
}
void insertAtHead(Node* &head, int val){
	Node* n = new Node(val);
	n->next = head;
	head = n;
}
void display(Node* head){
	Node* temp = head;
	while(temp!=NULL){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<"NULL"<<endl;
}
void search(Node* head, int key){
	Node* temp = head;
	string result = "False";
	while(temp->next!=NULL){
		if(temp->data==key){
			result="True";
		}
		temp=temp->next;
	}
	cout<<result<<endl;
}
void deletion(Node* &head, int val){
	Node* temp = head;
	if(head == NULL){
		return;
	}
	while(temp->next->data != val){
		temp = temp->next;
	}
	Node* toDelete = temp->next;
	temp->next = temp->next->next;
	delete toDelete;
}
void deletionAtHead(Node* &head){
//	Node* temp = head;
	Node* toDelete = head;
	head = head->next;
	delete toDelete;
	
}
bool isCircular(Node* head){
	Node* temp =head->next;
	while(temp!=NULL && temp==head){
		temp=temp->next;
	}
	if(temp==head) return true;
	
	return false;
}
bool floydDetectLoop(Node* head){
	if(head==NULL){
		return false;
	}
	Node* slow = head;
	Node* fast = head;
	while(slow!=NULL && fast!=NULL){
		slow=slow->next;
		fast=fast->next;
		if(fast!=NULL)
		fast=fast->next;
		if(slow==fast){
			return true;
		}
	}
	return false;
}
Node* reverse(Node* &head){
	Node* prev=NULL;
	Node* curr=head;
	Node* next;
	while(curr!=NULL){
		next=curr->next;
		curr->next=prev;
		
		prev=curr;
		curr=next;
	}
	return prev; //new head
}
Node* kReverse(Node* head,int k){
	Node* prev=NULL;
	Node* curr=head;
	Node* next=NULL;
	int count=0;
	while(curr!=NULL && count<k){
		next=curr->next;
		curr->next=prev;
		prev=curr;
		curr=next;
		count++;
	}
	if(next!=NULL){
		head->next=kReverse(next,k);
	}
	return prev;
}
int main(){
	Node *head = NULL; //empty link list
	insertAtTail(head,1);
	insertAtTail(head,2);
	insertAtTail(head,3);
	insertAtTail(head,4);
	insertAtHead(head,10);
	insertAtHead(head,20);
	display(head);
//	search(head,30);
//	deletion(head,40);
//	display(head);
//	deletionAtHead(head);
//	display(head);
//	if(isCircular(head))
//	cout<<"yes"<<endl;
//	else cout<<"no"<<endl;
//	cout<<floydDetectLoop(head)<<endl;
//	Node* newhead=reverse(head);
//	display(newhead);
	kReverse(head,2);
	display(head);
}
