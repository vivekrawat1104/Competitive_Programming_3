//3. Most Frequent Element.
#include<bits/stdc++.h>
using namespace std;
int main(){
	int a[]={1,2,2,2,2,3,7}, n=7, max=-1,maxe;
	unordered_map<int,int> hash;
	for(int i=0; i<n ; i++)
		hash[ a[i] ] ++;
	bool flag=0;
	for(auto it=hash.begin(); it!=hash.end() ; it++)
	{	//if((it->second)  > 1)
		{	cout<<(it->first)<<" -> "<<(it->second)<<endl;	flag=1;	}
	}
	for(auto it=hash.begin(); it!=hash.end() ; it++)
	{	if((it->second)  > max)
		{	max=(it->second);	maxe=it->first;	}
	}			
		if(flag==0)
			cout<<"No duplicates\n";
		else	cout<<"\n"<<maxe<<" ->"<<max<<endl;

}
 
