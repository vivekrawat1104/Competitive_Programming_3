//Generate all Permutations.
#include<bits/stdc++.h>
using namespace std;
void permute(char *a, int start, int end){
	if(start==end){
		cout<<a<<" ";	return;	
	}		
	for(int i=start ; i<end ; i++ ){
		swap(a[i],a[start]);
		permute(a, start+1, end);
		swap(a[i],a[start]);			
	}
}
int main(){
	char a[]="abc";	
	permute(  a,  0,  strlen(a)  );
}
