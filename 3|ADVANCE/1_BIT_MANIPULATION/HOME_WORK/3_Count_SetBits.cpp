//3. Count set bits in all no's from 1-n.
#include<bits/stdc++.h>
using namespace std;
void printbinary(int n){
	int *a=new int[sizeof(n)*8],	i=0;
	while(n>0){
		a[i++]= n%2;	n=n/2;	
	}
	for(i=sizeof(n)*8; i>=0 ; i--)
		cout<<a[i]<<" ";
	cout<<endl;
}
void countsetbits(int n){
	int bits=sizeof(n)*8;
	int start=0,end=bits-1,t=1,c=0;
	while(start<end){
		if ( n&(t<<start) ) 	c++;	
		start++;	
	}	cout<<"1's = "<<c<<endl;	
}
int main(){
	int n;	cout<<"n= "; 	cin>>n; 	
	for(int i=1; i<=n ; i++)	{	printbinary(i);	countsetbits(i);	}
}
