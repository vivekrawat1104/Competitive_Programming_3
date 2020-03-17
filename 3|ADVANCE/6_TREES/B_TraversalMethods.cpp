//1. BINARY TREE	
#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	int val;
	struct node *left=NULL,*right=NULL;
}node;	
node* createtree(node *root,int n){
	node *t;	t=new node[n];	int i,val;	
	for( i=0;  i<n ;i++){
		cout<<"Insert in t["<<i<<"] = ";	cin>>val;	
		(t[i].val)=val;		
		root=&t[i];		root->left=NULL;	root->right=NULL;	//cout<<(root->val)<<"\n";
	}
	for(i=0  ; i<n ;	i++){
		if( (2*i+1) >= (n) ){
			t[i].left=NULL;	t[i].right=NULL;			}	
		else if( (2*i+1) < (n)  && (2*i+2) >= (n)  ){
			t[i].left=&t[2*i+1] ;	t[i].right=NULL;		}			
		else{			
			t[i].left=&t[2*i+1] ;	t[i].right=&t[2*i+2] ;	}
		cout<<(t[i].val)<<" ";
	}
	root=&t[0]; return(root);
}

void preorder(node *root){	
	node *t;	t=root;
	if (t == NULL) 	return; 
	cout<<(t->val)<<" ";		preorder(t->left);			preorder(t->right);
}
void inorder(node *root){	
	node *t;	t=root;
	if (t == NULL) 	return; 
	inorder(t->left);			cout<<(t->val)<<" ";		inorder(t->right);
}
void postorder(node *root){	
	node *t;	t=root;
	if (t == NULL) 	return; 
	postorder(t->left);		postorder(t->right);		cout<<(t->val)<<" ";
}	
int main(){
	node *root=NULL;
	int n;	cout<<"n= "; cin>>n;
	root=createtree(root,n);
	//displaytree(root,n);
	cout<<"\nPreOrder  Traversal: \n"; preorder(root);	cout<<"\n";
	cout<<"\nInOrder    Traversal: \n"; inorder(root);	cout<<"\n";
	cout<<"\nPostOrder Traversal: \n"; postorder(root);	cout<<"\n";
}
