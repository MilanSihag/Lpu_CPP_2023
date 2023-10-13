#include<iostream>
#include<queue>
using namespace std;
class Node{
	public:
		int data;
		int key;
		Node* left;
		Node* right;
		Node(int val){
			data=val;
			left=NULL;
			right=NULL;
		}
};
Node* insertBST(Node* root, int val){
	if(root==NULL){
		return new Node(val);
	}
	if(val<root->data) root->left=insertBST(root->left,val);
	else root->right = insertBST(root->right,val);
	return root;
}
Node* inOrderSuccessor(Node* root){
	Node* curr = root;
	while(curr && curr->left !=NULL){
		curr = curr->left;
	}
	return curr;
}
Node* deleteInBST(Node* root,int key){
	if(key<root->data){
		root->left=deleteInBST(root->left,key);
	}
	else if(key>root->data){
		root->right = deleteInBST(root->right,key);
	}
	else{
		if(root->left==NULL){
			Node* temp = root->right;
			delete root;
			return temp;
		}
		else if(root->right==NULL){
			Node* temp = root->left;
			delete root;
			return temp;
		}
		//case 3
		Node* temp = inOrderSuccessor(root->right);
		root->data = temp->data;
		root->right= deleteInBST(root->right,temp->key);
	}
	return root;
}
int countNode(Node* root){
	if(root==NULL) return 0;
	int c = 0;
	queue<Node*> q;
	q.push(root);
	q.push(NULL);
	while(!q.empty()){
		Node* node = q.front();
		q.pop();
		if(node!=NULL){
			c++;
			if(node->left) q.push(node->left);
			if(node->right) q.push(node->right);
		}
		else if(!q.empty()){
			q.push(NULL);
		}
	}
	return c;
}
// by using recurssion
int nodeCount(Node* root){
	int count = 1;
	if(root->left!=NULL){
		count+=nodeCount(root->left);
	}
	if(root->right!=NULL){
		count+=nodeCount(root->right);
	}
	return count;
}
int main(){
	Node* root = NULL;
	root = insertBST(root,5);
	insertBST(root,1);
	insertBST(root,3);
	insertBST(root,4);
	insertBST(root,2);
	insertBST(root,7);
//	cout<<countNode(root);
	cout<<nodeCount(root);
}
