//Generate Power set
#include<bits/stdc++.h>
using namespace std;
void generate(char *a, char *t, int start, int end){
	if(start==end){	for(int i=0 ; i<end ;i++)	cout<<t[i];	
				cout<<endl;		//t[start]='\0';
				return;	
	}	
		t[start]=a[start];	
		generate(a,t,start+1,end);		
		t[start]='\0';	
		generate(a,t,start+1,end);		
		
		
}
int main(){
	int n,start,end;		cout<<"n= ";		cin>>n;			
	char a[n+1]="abc",t[n+1];		a[n]='\0';	t[n]='\0';	//cout<<sizeof(a);	
	generate(  a, t, 0,  n  );
}
