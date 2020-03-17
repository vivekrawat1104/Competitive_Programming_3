//5. PALINDROME OF BINARY NO.
#include<bits/stdc++.h> 
using namespace std;
void binaryprint(int n){
	int *a=new int[sizeof(n)*8],	i=0;
	while(n>0){
		a[i++]= n%2;	n=n/2;	
	}
	for(i=sizeof(n)*8; i>=0 ; i--)
		cout<<a[i];
	cout<<endl;
}
int main(){
	int flag=0,n,bits,start,end;	bits=sizeof(n)*8;	
	cout<<"n= ";	cin>>n;			//n=0101 1010  =90
	binaryprint(n);
	start=0, end=bits-1 ; 
	while( start<end ){
		if( n&(1<<start) ^ n&(1<<end))	{	flag=1;	break;	}
		start++; end--;
	}
	if(flag==1)	cout<<"NO Palindrome";
	else		cout<<"YES Palindrome";
}
