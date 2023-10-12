#include<iostream>
using namespace std;
/*
	rule 1: left subtree will contain nodes with keys less than the node's key
	rule 2: right subtree will contain nodes with keys greater than the node's key
	rule 3: left and right subtree should also be bst. There must be no dublicate nodes.
*/
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
Node* insertBST(Node* root, int val){
	if(root==NULL){
		return new Node(val);
	}
	if(val<root->data) root->left=insertBST(root->left,val);
	else root->right = insertBST(root->right,val);
	return root;
}
void inOrder(Node* root){
	if(root==NULL) return;
	inOrder(root->left);
	cout<<root->data<<" ";
	inOrder(root->right);
}
int main(){
	Node* root = NULL;
	root = insertBST(root,5);
	insertBST(root,1);
	insertBST(root,3);
	insertBST(root,4);
	insertBST(root,2);
	insertBST(root,7);
	inOrder(root);
}
