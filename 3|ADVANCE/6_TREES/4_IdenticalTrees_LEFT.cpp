//4. WHETHER 2 TREE ARE IDENTICAL
#include<bits/stdc++.h>
using namespace std;
typedef struct node{
	int val;
	struct node *left=NULL,*right=NULL;
}node;	
node* createtree(node *root,int n){
	node *t;	t=new node[n];	int i,val;	
	//Insert into nodes	
	for( i=0;  i<n ;i++){
		cout<<"Insert in t["<<i<<"] = ";	cin>>val;	
		(t[i].val)=val;		
		root=&t[i];		root->left=NULL;	root->right=NULL;	//cout<<(root->val)<<"\n";
	}
	//Connect all nodes
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
int identical(node *root1, node *root2){
	if(root1==NULL && root2==NULL)	return 1;
	if(root1 || root2 )	return 0;
	if(root1->val == root2->val){
		identical(root1->left, root2->left) && identical(root1->right, root2->right);	
	}
	return 0;
}	 

int main(){
	node *root1=NULL,*root2=NULL;
	int n1,n2;	cout<<"n1= "; cin>>n1;		cout<<"n2= "; cin>>n2;	
	root1=createtree(root1,n1);		cout<<"\n";
	root2=createtree(root2,n2);		cout<<"\n";	
	cout<<identical(root1,root2);
}
