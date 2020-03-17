//BINARY SEARCH
#include<bits/stdc++.h>
using namespace std;
int bsearch(int *a, int start, int end, int key){
	if(start>end){
				return -1;
	}	
	if(start<=end){		
		int mid=(start+(end))/2;
		if(a[mid]==key)	return(mid);
		if(a[mid]>key)	bsearch(a, start    , mid-1 , key);
		else if(a[mid]<key)	bsearch(a, mid+1 , end    , key);
	}
}
int main(){
	int n=7,a[]={1,3,5,10,50,100,120};
	for(int i=0; i<n;i++)	cout<<a[i]<<" ";
	cout<<endl;
	int t,key;	cout<<"Key= "; cin>>key;
	t=bsearch(a,0,n-1,key);	
	if(t>=0)	cout<<"YES : index= "<<t<<endl;
	else					cout<<"NO\n";
}
