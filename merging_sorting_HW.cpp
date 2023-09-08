#include<iostream>
using namespace std;
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
	
}
