//6. Print all k-digit no's digits={1 to 9} divisible by 7.
#include<bits/stdc++.h>
using namespace std;
void gstring(char *s, int low, int high)
{	if(low==high)
	{	s[high]='\0';	
		int n=atoi(s);
		if(n%7==0)			
			cout<<s<<"\t";		
		return;
	}
	for(int i=1; i<=9 ; i++)
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
