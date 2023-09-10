// You are using GCC
#include<iostream>
using namespace std;
class Node{
    public:
    int id;
    float amt;
    Node* next;
    Node(int i,float f){
        id=i;
        amt=f;
        next=NULL;
    }
};
void in(Node* &head,int i,float f){
    Node* n=new Node(i,f);
    if(head==NULL){
        head=n;
        return;
    }
    Node* temp=head;
    if(temp->next==NULL){
        temp->next=n;
        n->next=head;
        return;
    }
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=n;
    n->next=head;
}
void del(Node* &head,int i){
    Node* temp=head;
    if(head==NULL){
        return;
    }
    if(i==0){
        Node* toDel=head;
        while(temp->next!=head){
            temp=temp->next;
        }
        if(head->next->next==head){
            head=head->next;
            head->next=NULL;
            delete toDel;
            return;
        }
        head=head->next;
        temp->next=head;
        delete toDel;
        return;
    }
    int c=0;
    while(c<i-1){
        temp=temp->next;
    }
    Node* toDel=temp->next;
    temp->next=temp->next->next;
    delete toDel;
}
void dis(Node* head){
    Node* temp=head;
    int i=0;
    cout<<"Index "<<i<<": Transaction ID: "<<temp->id<<", Amount: "<<temp->amt<<endl;
    temp=temp->next;
    while(temp!=head){
        i++;
        cout<<"Index "<<i<<": Transaction ID: "<<temp->id<<", Amount: "<<temp->amt<<endl;
        temp=temp->next;
    }
}
int main(){
    int n;
    cin>>n;
    Node* head=NULL;
    for(int i=0;i<n;i++){
        int id; float f;
        cin>>id>>f;
        in(head,id,f);
    }
    int p;
    cin>>p;
    if(p<0 || p>=n){
        cout<<"Invalid index.";
        return 0;
    }
    cout<<"Transaction record at index "<<p<<" has been successfully deleted."<<endl;
    cout<<"Updated transaction records:"<<endl;
    del(head,p);
    dis(head);
}
