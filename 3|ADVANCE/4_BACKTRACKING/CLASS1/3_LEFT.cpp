//3. Generate all strings of {0,1} of length=k without consecutive 1's.
#include<bits/stdc++.h>
using namespace std;
char *str;
void gstring(char *str,int low,int high)
{	if(low==high)
		{	cout<<str<<"\n";		return;	}
	str[low]='0';	
	gstring(str,low+1,high);
	str[low]='1';	
	gstring(str,low+1,high);
}
int main()
{	int k,low,high;			cout<<"k="; cin>>k;
	char str[k+1];			str[k]='\0';
	gstring(str,low=0,high=k);
}
