#include<iostream>
#include<map>
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
void insertTail(Node* &head,int val){
	Node* n = new Node(val);
	if(head==NULL){
		head=n;
		return;
	}
	Node* temp=head;
	if(temp->next==NULL){
		temp->next=n;
		n->next=head;
	}
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=n;
	n->next=head;
}
void insertionAtHead(Node* &head,int val){
	Node* n= new Node(val);
	if(head==NULL){
		head=n;
		return;
	}
	Node* temp=head;
	if(temp->next==NULL){
		temp->next=n;
		n->next=head;
		head=n;
	}
	while(temp->next!=head){
		temp=temp->next;
	}
	temp->next=n;
	n->next=head;
	head=n;
}
void deletion(Node* &head,int val){
	Node* temp=head;
	if(head==NULL){
		return;
	}
	while(temp->next->data!=val){
		temp=temp->next;
	}
	Node* toDelete= temp->next;
	temp->next=temp->next->next;
	delete toDelete;
}
void display(Node* head){
	Node* temp=head;
	cout<<temp->data<<"->";
	temp=temp->next;
	while(temp!=head){
		cout<<temp->data<<"->";
		temp=temp->next;
	}
	cout<<endl;
}
bool isCircular(Node* head){
	Node* temp =head->next;
	while(temp!=NULL && temp==head){
		temp=temp->next;
	}
	if(temp==head) return true;
	
	return false;
}
bool detectLoop(Node* head){
	if(head==NULL){
		return false;
	}
	map<Node*, bool> visited;
	Node* temp = head;
	while(temp!=NULL){
		if(visited[temp]==true){
			return true;
		}
		visited[temp]=true;
		temp=temp->next;
	}
	return false;
}
Node* floydDetectLoop(Node* head){
	if(head==NULL){
		return NULL;
	}
	Node* slow = head;
	Node* fast = head;
	while(slow!=NULL && fast!=NULL){
		slow=slow->next;
		fast=fast->next;
		if(fast!=NULL)
		fast=fast->next;
		if(slow==fast){
			return slow;
		}
	}
	return NULL;
}
Node* getStartingNode(Node* head){
	if(head==NULL){
		return NULL;
	}
	Node* intersection = floydDetectLoop(head);
	Node* slow =head;
	while(slow!=intersection){
		slow=slow->next;
		intersection=intersection->next;
		if(slow==intersection){
			return slow;
		}
	}
}
void removeLoop(Node* head){
	if(head==NULL){
		return;
	}
	Node* startOfLoop = getStartingNode(head);
	Node* temp = startOfLoop;
	while(temp->next!=startOfLoop){
		temp=temp->next;
	}
	temp->next = NULL;
}
int main(){
	Node* head=NULL;
	insertTail(head,1);
	insertTail(head,2);
	insertTail(head,3);
	insertionAtHead(head,4);
	display(head);
//	cout<<isCircular(head);

}
