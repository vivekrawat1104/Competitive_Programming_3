//1. Generate all strings of {0,1} of length=k.
#include<bits/stdc++.h>
using namespace std;
void gstring(char *str,int k)
{	if(k==-1)
		{	cout<<str<<"\n";		return;	}
	str[k]='0';	
	gstring(str,k-1);
	str[k]='1';	
	gstring(str,k-1);
}
int main()
{	int k;
	cout<<"k="; cin>>k;
	//cout<<sizeof(long int);		//8
	//cout<<sizeof(long long int);	//8		cout<<sizeof(NULL);	//8	
	char str[k+1];	
	str[k]='\0';
	gstring(str,k-1);
}
