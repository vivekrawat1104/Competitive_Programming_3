//2. Smallest power of 2..... 2^x >=n
#include<bits/stdc++.h>
using namespace std;
void binaryprint(int n){
	int *a=new int[sizeof(n)*8],	i=0;
	while(n>0){
		a[i++]= n%2;	n=n/2;	
	}
	for(i=sizeof(n)*8; i>=0 ; i--)
		cout<<a[i]<<" ";
	cout<<endl;
}
int main(){
	int c=0,n,bits=sizeof(n)*8;	cout<<"n= "; 	cin>>n;	binaryprint(n);
	//n=n>>1;	binaryprint(n);	
while(n!=0){
		n=n>>1;		c++;
	}	//cout<<"count= "<<c<<endl;
	int temp=1;	
	while(c>0){
		temp= temp<<1;	c--;
	}	cout<<"temp = "<<temp<<endl; 	binaryprint(temp);
}
