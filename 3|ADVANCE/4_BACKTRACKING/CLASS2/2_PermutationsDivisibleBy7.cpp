//2. Digits from 1-k digits div. by 7.
#include<bits/stdc++.h>
using namespace std;
void generate(char *a, int start, int end){
	if(start==end)
	{      if(atoi(a)%7==0){
				cout<<atoi(a)<<"\n";	return;	
		}
	}
	else{		for(int i=start; i<end ; i++)
			{	swap(a[start],a[i]);
				generate(a,start+1,end);
				swap(a[start],a[i]);	
			}
	      }	
}
int main(){
	int i,k;	cout<<"k= ";		cin>>k;
	char *a;	a=new char[k+1];	a[k]='\0';		
	for(int i=0 ; i<k ; i++)
		a[i]='0'+(i+1);	
	cout<<"No. divisible by 7 :\n";
	generate(  a,  0,  strlen(a)  );
}
