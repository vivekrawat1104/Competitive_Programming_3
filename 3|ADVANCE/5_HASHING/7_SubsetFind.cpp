// 7. Find whether an array b[], is a subset of another array a[].	//LEFT
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={5,6,1,2,3,7},b[]={1,2,3}, asize=6, bsize=3;
	unordered_map<int ,int> hash;		bool flag=false;
	for(int i=0; i<asize ; i++)
		hash[a[i]]++;
	for(int i=0 ; i<bsize ; i++)
	{	if ( hash.find(b[i])==hash.end() )
		{	cout<<"This Elements of b is not found in a : "<<b[i]<<endl;
			flag=true;	
		}	
	}
} 
