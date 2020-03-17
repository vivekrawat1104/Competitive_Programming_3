//COIN CHANGE PROBLEM
#include<bits/stdc++.h>
using namespace std;
int s[]={2,5,10,25,50};
int coinchange(int sum, int n){		int k;
	if(sum==0)	return 0;
	if(n==0)		return 0;
	if(sum>=s[n])
		 k=coinchange(sum-s[n], n);	
	return( coinchange(sum,n-1) + k );
}
int main(){
	int sum=0,n=4; 
	cout<<coinchange(sum, n)<<endl;
}
