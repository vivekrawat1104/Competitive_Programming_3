//8. Subset Sum Problem
#include<bits/stdc++.h>
using namespace std;
int sum=0;static int nodes=0;
void ssum(int a[], int sum, int index, int n, int k, int totalsum)
{		nodes++;	
	if(sum==k)	{  cout<<"Yes"; 	return;    }
	if(sum>k)		{  cout<<"No";	return;    }
	ssum(a, sum+a[index] , index+1 , n , k, totalsum-a[index]   );
	ssum(a, sum	     , index+1 , n , k, totalsum-a[index]   );
}
int main()
{
	int a[]={5,4,8,3,6,1}, totalsum=0, k , n=6  ,index=0 ;//a[]={5,10,12,13,15,18}
	cout<<"k= "; 	cin>>k;
	for(int i=0 ; i<n  ; i++	)
		totalsum+=a[i];
	//cout<<totalsum<<endl;
	int *path;	path=new int[n];
	ssum(a, sum, index=-1, n, k, totalsum);	
	cout<<"\nTotal  nodes= "<<nodes;
}
