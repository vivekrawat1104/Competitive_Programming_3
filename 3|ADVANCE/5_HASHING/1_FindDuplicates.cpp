//1. Find Duplicates
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1,2,3,4,5,6,6}, n=7;
	unordered_map<int,int> hash;
	for(int i=0; i<n ; i++)
		hash[ a[i] ] ++;
	bool flag=0;
	for(auto it=hash.begin(); it!=hash.end() ; it++)
	{	if((it->second)  > 1)
		{	cout<<(it->first)<<" -> "<<(it->second)<<endl;	flag=1;	}
	}
		if(flag==0)
			cout<<"No duplicates";
} 
