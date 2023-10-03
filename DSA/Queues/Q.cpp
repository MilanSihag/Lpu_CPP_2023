// You are using GCC
#include<iostream>
using namespace std;
class Node{
    public:
    Node* next;
    int data;
    Node(int val){
        data=val;
        next=NULL;
    }
};
class Queue{
    Node* front;
    Node* back;
    public:
    Queue(){
        front=NULL;
        back=NULL;
    }
    void push(int val){
        Node* n =new Node(val);
        if(front==NULL){
            front = n;
            back = n;
            return;
        }
        back->next=n;
        back=n;
    }
    void dis(){
        Node* f=front;
        while(f!=NULL){
            Node* b=front;
            cout<<f->data<<" ";
            if(back==f) break;
            cout<<back->data<<" ";
            if(f->next->next!=NULL)
            f=f->next;
            else break;
            while(b->next->next!=NULL){
                b=b->next;
            }
            Node* del= back;
            back = b;
            delete del;
        }
    }
};
int main(){
    int n;
    cin>>n;
    Queue q;
    int in;
    for(int i=0;i<n;i++){
        cin>>in;
        q.push(in);
    }
    cin>>in;
    q.dis();
}
