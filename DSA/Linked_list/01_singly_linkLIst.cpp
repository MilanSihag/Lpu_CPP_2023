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
	Node* n;
	while(curr!=NULL){
		n=curr->next;
		curr->next=prev;
		
		prev=curr;
		curr=n;
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
void sort(Node* &head){
	if(head==NULL||head->next==NULL) return;
	Node* p1 = head;
	Node* p2;
	int size=0;
	
	while(p1!=NULL){
		p1=p1->next;
		size++;
	}

	for(int i=0;i<size-1;i++){
		p1=head;
		p2=p1->next;
		for(int j=0;j<size-i-1;j++){
			if(p1->data>p2->data){
				int temp=p2->data;
				p2->data=p1->data;
				p1->data=temp;
			}
			p2=p2->next;
			p1=p1->next;
		}
	}
}
Node* mergingSort(Node* &head1,Node* head2){
	Node* p1=head1;
	Node* p2=p1->next;
	Node* temp=head2;
	while(temp!=NULL){
		Node* n = new Node(temp->data);
		if(p1->data < temp->data && temp->data <= p2->data){
			n->next=p2;
			p1->next=n;
			p1=p1->next;
			temp=temp->next;	
		}
		else if(temp->data > p2->data && p2->next==NULL){
			p2->next=n;
			p2=n;
			p1=p1->next;
			temp=temp->next;
		}
		else{
			p1=p2;
			p2=p2->next;
		}
	}
	return head1;
}
int main(){
	Node *head = NULL; //empty link list
	insertAtTail(head,1);
	insertAtTail(head,3);
	insertAtTail(head,5);
//	insertAtHead(head,10);
//	insertAtHead(head,20);
	display(head);
	Node* head1= NULL;
	insertAtTail(head1,2);
	insertAtTail(head1,3);
	insertAtTail(head1,4);
	insertAtTail(head1,7);
	display(head1);
	Node* newHead=mergingSort(head,head1);
	display(newHead);
//	sort(head);
//	display(head);
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
//	kReverse(head,2);
//	display(head);
}
