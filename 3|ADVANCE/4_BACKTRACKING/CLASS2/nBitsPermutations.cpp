//  All strings of n-bits.
#include<bits/stdc++.h>
using namespace std;
void generate(char *a, int start, int end){
	if(start==end){
		cout<<a<<"\n";	
		return;	
	}
		a[start]='0';	generate(a,start+1,end);
		a[start]='1';	generate(a,start+1,end);
		a[start]='2';	generate(a,start+1,end);
}
int main(){
	int n,start,end;		cout<<"n= ";		cin>>n;
	char *a;			a=new char[n+1];	a[n]='\0';
	generate( a , start=0 , end=n );
	cout<<"\n";
}
