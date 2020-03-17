// Binomial Coefficient
#include<bits/stdc++.h>
using namespace std;
int C(int n, int k){
	if(k==0 || k==n)
		return 1;
	return C(n-1,k-1)+C(n-1,k);
}
int main(){
	int n,k;	cout<<"n= ";	cin>>n;
			cout<<"k= ";	cin>>k;	
	cout<<C(n,k)<<endl;
}
