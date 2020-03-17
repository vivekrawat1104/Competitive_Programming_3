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
		if( (2*i+1) < (n)  && (2*i+2) >= (n)  ){
			t[i].left=&t[2*i+1] ;	t[i].right=NULL;		}			
		else			
			t[i].left=&t[2*i+1] ;	t[i].right=&t[2*i+2] ;	
		//cout<<(t[i].val)<<"\n";
	}
	root=&t[0]; return(root);
}
void displaytree(node *root,int n){
	cout<<(root->val)<<" "<<(root->left->val) <<" "<<(root->right->val)<<"\n"; 
}	
int main(){
	node *root=NULL;
	int n;	cout<<"n= "; cin>>n;
	root=createtree(root,n);
	displaytree(root,n);
}
