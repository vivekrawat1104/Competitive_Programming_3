//4. Print all k-digit no's digits={0 to 9}
#include<bits/stdc++.h>
using namespace std;
void gstring(char *s, int low, int high)
{
	if(low==high)
	{	
		s[high]='\0';	
		if(s[0]=='0')	cout<<s[high-1]<<"\t";			
		else			cout<<s<<"\t";		
		return;
	}
	for(int i=0; i<=9 ; i++)
	{	
		s[low]='0'+i;
		gstring(s,low+1,high);
	}
}
int main()
{	char *s;
	int k,low,high;	cout<<"k="; cin>>k;
	gstring(s,low=0,high=k);
}
