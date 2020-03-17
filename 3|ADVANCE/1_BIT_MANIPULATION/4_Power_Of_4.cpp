//4. No is a power of 4.		->if 0's are even before 1	0000 0100//4	 LEFT
#include<bits/stdc++.h> 
using namespace std;
int main(){
	int t=0,n,c=0,bits,start;	bits=sizeof(n)*8;	
	cout<<"n= ";	cin>>n;	
//	t=n & (1<<0);	cout<<t;
	for(start=0 ; start<bits ; start++){
		if(t= n & (1<<start) )  	 		{ cout<<"hi "<<t<<" \n" ; break;	 }
		else 	if(n & (1<<start)==0) 	{c++; cout<<"bi";	}
	}

		cout<<"0's = "<<c;
//	if(c==1)	cout<<"YES - Power of 2.";
//	else		cout<<"NO  - Power of 2.";
}
