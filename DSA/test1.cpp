// You are using GCC
#include<iostream>
#include<string>
using namespace std;
class Node{
    public:
    string data;
    Node* next;
    Node(string val){
        data=val;
        next=NULL;
    }
};
void in(Node* &head,string val){
    Node* n = new Node(val);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    if(head->next==NULL){
        n->next=head;
        head->next=n;
        head=n;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    n->next=head;
    temp->next=n;
    head=n;
}
void rev(Node* &head){
    Node* curr=head;
    Node* prev=NULL;
    Node* n=curr->next;
    
    curr->next=prev;
    prev=curr;
    curr=n;
    while(curr!=head){
        n=curr->next;
        curr->next=prev;
        prev=curr;
        curr=n;
    }
    curr->next=prev;
    head=prev;
}
void dis(Node* head){
    Node* temp=head;
    cout<<"- "<<temp->data<<endl;
    temp=temp->next;
    while(temp!=head){
        cout<<"- "<<temp->data<<endl;
        temp=temp->next;
    }
}
int main(){
    int n;
    cin>>n;
    if(n<=0){
        cout<<"Message queue is empty!"<<endl;
        return 0;
    }
    Node* head=NULL;
    cin.ignore();
    for(int i=0;i<n;i++){
        string s;
        getline(cin,s);
        in(head,s);
    }
    cout<<"Message Queue:"<<endl;
    dis(head);
    cout<<endl<<"after reversal:"<<endl;
    rev(head);
    dis(head);
}
