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
		//cout<<(t[i].val)<<" ";
	}
	root=&t[0]; return(root);
}
int height(node *root){
	if(root==NULL)	return 0;
	return max(  height(root->left) , height(root->right) ) + 1 ;  	
}
void printarray(char path[], int len){
	for(int i=0; i<=len ;i++)
		cout<<path[i]<<" ";
	cout<<"\n";
}
void printpaths(node *root,char path[],int pathlen){
	char *str;
	if(root==NULL)	
		return;
	path[pathlen]=(root->val);	cout<<path[pathlen]<<" ";		pathlen++;
	if(root->left==NULL && root->right==NULL)	 	
		printarray(path,pathlen);
	else{		
			printpaths(root->left,    path,  pathlen);	
			printpaths(root->right,  path,  pathlen);	
	}
}	
int main(){
	node *root=NULL;
	int n;	cout<<"n= "; cin>>n;
	root=createtree(root,n);	 int h=height(root);	char *str=new char[h+1];	str[h]='\0';
	printpaths(root,str,0);

}
