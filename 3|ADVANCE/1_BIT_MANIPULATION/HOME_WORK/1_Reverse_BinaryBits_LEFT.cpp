//1. Reverse bits of a no.	//LEFT	
#include<bits/stdc++.h> 
#include<stdio.h>
using namespace std;
void binaryprint(int n){
	for(int i=sizeof(n)*8-1; i>=0 ; i--){
		if(n&1<<i)	cout<<"1 ";
		else		cout<<"0 ";		
	}
	cout<<endl;
}
int main(){
	int n;	
	cout<<"n= "; 	cin>>n;	
	binaryprint(n);
	int bits=sizeof(n)*8,l ,r,start=0,end=bits-1;
	while(end>start){
		l = ( n & 1<<start)? 1 : 0;
		r = (	n & 1<<end)?  1: 0;
		if(l!=r){
			if(l==0 && r==1){
				n= n | (1<<start);
				n=n ^ (1<<end);			
			}	
			else if(l==1 && r==0){
				n= n^ (1<<start);
				n= n|  (1<<end);			
			}		
		}
		start++;	end--;
	}
	binaryprint(n);
}
