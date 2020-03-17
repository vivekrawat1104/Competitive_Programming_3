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
int height(node *root){
	if(root==NULL)	return 0;
	return max(  height(root->left) , height(root->right) ) + 1 ;  	
}
void printlevel(node *root, int level){
	if(root==NULL)	{	return;					}
	if(level==1)	{	cout<<(root->val);	return;	}
	printlevel(root->left,    level-1);
	printlevel(root->right , level-1 );
}
void printlevelopposite(node *root, int level){
	if(root==NULL)	{	return;					}
	if(level==1)	{	cout<<(root->val);	return;	}
	printlevel(root->right,    level-1);
	printlevel(root->left  , level-1 );
}
void levelorder(node *root){	
	node *t;	t=root;
	int h=height(root);
	for(int i=1; i<=h ; i++){	
		if(i%2==1)	{	printlevel(root, i);			cout<<"\n";			}
		else			{	printlevelopposite(root, i);	cout<<"\n";			}
	}
}

int main(){
	node *root1=NULL,*root2=NULL;
	int n1,n2;	cout<<"n1= "; cin>>n1;		//cout<<"n2= "; cin>>n2;	
	root1=createtree(root1,n1);		cout<<"\n";
	//root2=createtree(root2,n2);		cout<<"\n";	
	levelorder(root1);
}
