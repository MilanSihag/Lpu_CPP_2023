// You are using GCC
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
void in(Node* &head,int val){
    Node* n=new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}
void dis(Node* head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<" "<<temp->data;
        temp=temp->next;
    }
}
void del(Node* &head,int key){
    Node* temp=head;
	if(head->data==key){
		Node* toDel=head;
		head=head->next;
		delete toDel;
		return;
	}
    while(temp->next->data!=key){
        temp=temp->next;
    }
    Node* toDel=temp->next;
    temp->next=temp->next->next;
    delete toDel;
}
int main(){
    Node* head1=NULL;
    Node* head2=NULL;
    int n,m;
    cin>>n;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        in(head1,val);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        int val;
        cin>>val;
        in(head2,val);
    }
    cout<<"First Linked List before deletion:";
    dis(head1); 
    cout<<endl;
    int count=0;
    Node* t2=head2;
	Node* t1=head1;
    while(t2!=NULL){
        int k=t2->data;
        while(t1!=NULL){
            if(t1->data==k){
                del(head1,k);
                count++;
            }
            t1=t1->next;
        }
        t1=head1;
        t2=t2->next;
    }
    cout<<"First Linked List after deletion:";
    dis(head1);
	cout<<endl;
    if(count==n) cout<<"All elements in the first linked list are the same.";
}
