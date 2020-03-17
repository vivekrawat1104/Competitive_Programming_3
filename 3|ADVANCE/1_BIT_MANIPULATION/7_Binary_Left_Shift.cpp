//7. k-th bit Left Shift.		1010  k=1  0101
#include<bits/stdc++.h> 
using namespace std;
void binaryprint(int n){
	int *a=new int[sizeof(n)*8],	i=0;
	while(n>0){
		a[i++]= n%2;	n=n/2;	
	}
	for(i=sizeof(n)*8; i>=0 ; i--)
		cout<<a[i];
	cout<<endl;
}
int main(){
	int n,k;		int bits=sizeof(n)*8;	
	cout<<"n= ";	cin>>n;	binaryprint(n);
	cout<<"k= "; 	cin>>k;
	n=(n<<k) | n>>(bits-k);	binaryprint(n);
}
