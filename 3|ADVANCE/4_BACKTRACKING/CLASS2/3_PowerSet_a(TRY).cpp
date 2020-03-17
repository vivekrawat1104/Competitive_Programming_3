//Generate Power set
#include<bits/stdc++.h>
using namespace std;
void generate(char *a, char *t, int start, int end){
	if(start==end){	cout<<endl;
		for(int i=0 ; i<end  ;i++)
		{	if(t[i]!='0')	
				cout<<a[i];	
		}
	return;	
	}		
		t[start]='0';	generate(a,t,start+1,end);
		t[start]='1';	generate(a,t,start+1,end);
}
int main(){
	int n,start,end;		cout<<"n= ";		cin>>n;			
	char a[n]="abc",t[n];		a[n]='\0';	t[n]='\0';		
	generate(  a, t, 0,  n  );
}
