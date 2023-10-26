#include<iostream>
using namespace std;
class Node{
	public:
		int key;
		Node* left;
		Node* right;
		int height;
};
Node* newNode(int key){
	Node* node = new Node;
	node->key = key;
	node->left = NULL;
	node->right = NULL;
	node->height = 1;
	return node;
}
int height(Node* node){
	if(node==NULL) return 0;
	return node->height;
}
int getBalance(Node* node){
	if(node==NULL) return 0;
	return height(node->left)-height(node->right);
}
Node* rightRotate(Node* y){
	Node* x = y->left;
	Node* t1 = x->right;
	x->right = y;
	y->left = t1;
	
	y->height = max(height(y->left),height(y->right))+1;
	x->height = max(height(x->left),height(x->right))+1;
	return x;
}
Node* leftRotate(Node* x){
	Node* y = x->right;
	Node* t1 = y->left;
	
	y->left = x;
	x->right = t1;
	y->height = max(height(y->left),height(y->right))+1;
	x->height = max(height(x->left),height(x->right))+1;
	return y;
}
Node* insert(Node* node,int key){
	if(node==NULL){
		return newNode(key);
	}
	if(key<node->key){
		node->left = insert(node->left,key);
	}
	else if(key>node->key){
		node->right = insert(node->right,key);
	}
	else return node;
	
	//updating height
	node->height = max(height(node->left),height(node->right))+1;
	
	int balance = getBalance(node);
	//LL case
	if(balance>1 && key<node->left->key){
		return rightRotate(node);
	}
	//LR
	if(balance>1 && key>node->left->key){
		node->left = leftRotate(node->left);
		return rightRotate(node);
	}
	//RR
	if(balance<-1 && key>node->right->key){
		return leftRotate(node);
	}
	//RL
	if(balance<-1 && key<node->right->key){
		node->right = rightRotate(node->right);
		return leftRotate(node);
	}
}
int main(){
	
}
