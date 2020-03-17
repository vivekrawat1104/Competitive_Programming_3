//3. nCr % p
#include<bits/stdc++.h>
using namespace std;
int P(int n, int k){
	if(k==0 )	return 1;
	if(k==n)	return n;	//nPn==n
	return  (		P(n-1,k) +  ( k * P(n-1,k-1) ) 	);
}
int main(){
	int n,k;	cout<<"n= ";	cin>>n;
			cout<<"k= ";	cin>>k;	
	cout<<P(n,k)<<endl;
}
