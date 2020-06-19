#include <bits/stdc++.h>
using namespace std;

struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

struct Node *newNode(int data){
	struct Node* temp =(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
}

void inorder(struct Node* root){
	if(root!=NULL){
		inorder(root->left);
		cout << root- >data;
		inorder(root->right);
	}
}

struct Node *insert(struct Node* node ,int data){
	if(node==NULL){
		return newNode(key);
		
	}
	if(key < node->data){
		node->left=insert(node->left,data);
	}
	else 
	node ->right =insert(node->right,data);
	return node;
}


struct Node* minValueNode(struct Node* node){
	struct Node* current =node;
	while(current && current->left !=NULL){
		current =current->left;
	}
	return current;
}

struct Node* deleteNode(struct Node* root ,int data){
	if(root==NULL){
		return root;
	}
	if(data < node->data){
		root->left =deleteNode(root->left,data);
	}
	else if(data > root->data){
		root->right = deleteNode(root->right,data);
	}
	//if key is same as root's key 
	else {
		if(root->left==NULL){
			struct Node* temp =root->right;
			free(root);
			return temp;
		}
		else if(root->right ==NULL){
			struct Node* temp =root->left;
			free(root);
			return temp;
		}
		
		//node with two children : get the inorder successor 
		struct Node* temp =minValueNode(root->right);
		
		//copy the inorder successor;s content to this node 
		root->data =temp->data;
		
		//delete the inorder successor 
		root->right =deleteNode(root->right,temp->data);
	}
}




int main(){
	int q;
	cin >> q;
	multimap<char,int> tree_k;
	
	while(q--){
		char i;int x;
		cin >> i >> x;
		tree_k.insert(piar<int,int> (i,x));
	}
	
	
	
	
	
	
	
	
	return 0;
}