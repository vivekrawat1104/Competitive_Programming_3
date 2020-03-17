//6. If, no. is a power of 2.	Return ( x && !(x&(x-1)) )	
#include<bits/stdc++.h> 
using namespace std;
int checkpowertwo(int n){
	int c=0,bits,start;		bits=sizeof(n)*8;		
	for(start=0 ; start<bits ; start++){
		if(n & (1<<start))	c++;
	}
	if(c==1)	{	cout<<"YES - Power of 2.\n";	return n && !(n&(n-1)) ;	}
	else		{	cout<<"NO  - Power of 2.\n";	return 0;					}
}
int main(){
	int t=0,n,c=0,bits,start;	bits=sizeof(n)*8;	
	cout<<"n= ";	cin>>n;	
	cout<<checkpowertwo(n);
}
