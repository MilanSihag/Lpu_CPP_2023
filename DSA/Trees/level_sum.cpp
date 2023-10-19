#include<iostream>
#include<queue>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
		Node(int val){
			data=val;
			left=NULL;
			right=NULL;
		}
};
int getSum(Node* root,int k){
	if(root==NULL) return 0;
	if(k==0) return root->data;
	int sum=0;
	int level=1;
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		Node* node = q.front();
		q.pop();
		if(node!=NULL){
			if(level==k){
				if(node->left){
					q.push(node->left);
					sum+=node->left->data;
				}
				if(node->right){
					q.push(node->right);
					sum+=node->right->data;
				}
			}
			else{
				if(node->left) q.push(node->left);
				if(node->right) q.push(node->right);
			}
		}
		else if(!q.empty()){
			q.push(NULL);
			level++;
		}
	}
	return sum;
}
int main(){
	Node* root = new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	root->right->left = new Node(6);
	root->right->right = new Node(7);
	cout<<"Enter the value of k: ";
	int k;
	cin>>k;
	cout<<"Sum of level "<<k<<" is : "<<getSum(root,k);
}
