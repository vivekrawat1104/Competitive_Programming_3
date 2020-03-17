//3. No is a power of 2.
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int n,c=0,bits,start;	bits=sizeof(n)*8;	
	cout<<"n= ";	cin>>n;	
	for(start=0 ; start<bits ; start++){
		if(n & (1<<start))	c++;
	}
	if(c==1)	cout<<"YES - Power of 2.";
	else		cout<<"NO  - Power of 2.";
}
