//5. Machine is Little / Big Endian.
#include<bits/stdc++.h> 
#include<stdio.h>
using namespace std;
void endianess(char *start, int n){
	for( int i=0; i<n ; i++ )
		printf("%.2x ",start[i]);	//67 45 23 01
}
int main(){
	int i=0x01234567;	cout<<i<<endl;
	endianess((char*)&i,sizeof(i));
	char *c=(char*)&i;
	if(*c) cout<<"\nLittle Endian";
	else	cout<<"\nBig Endian";			
}
