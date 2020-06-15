#include <bits/stdc++.h>

#define pb push_back 
#define ll long long 
#define forit(it,a) for(_typeof(a.begin()) it =a.begin();it!=a.end();it++)
#define mp make_apir 

using namespace std;

//output is not quite right -->
//refer again to the sample solution 
//in terms of what needs to be printed out 


struct Node {
	int data;
	struct Node* left ,*right;
};

struct Node* newNode(int data){
	struct Node* node =(struct Node*)malloc(sizeof(struct Node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}
struct Node* insertNode(struct Node* node ,int data){
	if(node==NULL){
		return newNode(data);
	}
	if(data < node->data){
		node->left =insertNode(node->left,data);
		
	}
	else{
		node->right=insertNode(node->right,data);
	}
	return node;
}

struct Node* minValueNode(struct Node* node){
	struct Node* current = node;
	
	while(current && current->left !=NULL)
	current =current->left;
	
	return current;
}

struct Node* deleteNode(struct Node* node,int data){
	if(node==NULL){
		return node;
	}
	if(data  < node->data){
		node->left = deleteNode(node->left,data);
	}
	else if(data > node->data){
		node->right= deleteNode(node->right,data);
	}
	else{
		if(node->left==NULL){
			struct Node *temp =node->right;
			free(node);
			return temp;
		}
		else if(node->right==NULL){
			struct Node* temp =node->left;
			free(node);
			return temp;
		}
	struct Node* temp =minValueNode(node->right);	
	node->data=temp->data;
	node->right =deleteNode(node->right,temp->data);
	}
	return node;
}

int main(){
	int t;
	cin >> t;
	multimap<char,int> a1;
	while(t--){
		char i ;int x ;
		cin >> i >>x;
		a1.insert(pair<char,int>(i,x));
		
	}
	
	struct Node * root =NULL;
	multimap<char,int>::iterator itr;
	
	for(itr = a1.begin();itr!=a1.end();++itr){
		if(itr->first=='i'){
			root=  insertNode(root,itr->second);
			cout << root->data<<"\n";
		}
		else{
			 root= deleteNode(root,itr->second);
			 cout << root->data<<"\n";
		}
	}
	
	return 0;
}