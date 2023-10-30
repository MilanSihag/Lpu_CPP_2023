#include<iostream>
using namespace std;
class Node{
	public:
		int data;
		Node* left;
		Node* right;
};
bool isCBT(Node* root,int i, int nodeCount){
	if(root==NULL) return true;
	if(i > nodeCount) return false;
	else{
		bool left = isCBT(root->left,2*i,nodeCount);
		bool right = isCBT(root->right,(2*i)+1,nodeCount);
		return (left && right);
	}
}
bool isHeap(Node* root){
	if(root->left==NULL && root->right==NULL) return true;
	if(root->right==NULL) return (root->data > root->left->data);
	else{
		return (root->data > root->left->data && root->data > root->right->data &&
		isHeap(root->left) && isHeap(root->right));
	}
}
bool isMaxHeap(Node* root, int i, int nodeCount){
	if(isCBT(root,i,nodeCount) && isHeap(root)) return true;
	else return false;
}
int main(){
	Node* root = NULL;
	root->data = 10;
	root->left->data = 8;
	root->right->data = 9;
	root->left->left->data = 7;
	root->left->right->data = 6;
	if(isMaxHeap(root,1,5)){
		cout<<"It is a max heap"<<endl;
	}
	else cout<<"NO it's not a max heap"<<endl;
}
