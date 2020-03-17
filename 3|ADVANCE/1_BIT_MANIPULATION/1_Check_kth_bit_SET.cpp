//1. Check kth bit SET
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5,k;//0000 0101
	cout<<"k= ";	cin>>k;
	if(n & (1<<k))	cout<<"YES\n";
	else			cout<<"NO\n";
}
