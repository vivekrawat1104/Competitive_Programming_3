//2.  SET the k-th bit
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n=5,k;//0000 0101
	cout<<"k= ";	cin>>k;//k=1
	n= (n | (1<<k));	cout<<"n= "<<n;//0000 0111= 7
}
