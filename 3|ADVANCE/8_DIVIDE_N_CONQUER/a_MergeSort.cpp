// MERGE SORT
#include<bits/stdc++.h>
using namespace std;

void merge(int *a, int start, int mid, int end){
	int  n1=mid-start+1, n2=end-mid;
	int L[n1],R[n2];
	int i,j,k;
	for(i=0; i<n1; i++)	L[i]=a[start+i];	//Copy Left   Half
	for(j=0; j<n2; j++)	R[j]=a[mid+1+j];	//Copy Right Half
	i=0, j=0, k=start ;
	while( i<n1 && j<n2 ){
		if(L[i]<=R[j])	a[k++]=L[i++];
		else			a[k++]=R[j++];		
	}
		while(i<n1)	a[k++]=L[i++];	//Copy Left
		while(j<n2)	a[k++]=R[j++];	//Copy Right	
}
void mergeSort(int *a,  int start, int end){
	if(start<end){
		int mid=start+(end-start)/2;
		mergeSort(a,  start    , mid);
		mergeSort(a,  mid+1 , end);
			merge(a,  start, mid, end);		
	}	
}	
int main()  
{  
    int a[] = { 1, 20, 6, 4, 5 };  
    int n = sizeof(a)/sizeof(a[0]);  
	for(int i=0 ; i<n  ; i++)
		cout<<a[i]<<" ";     
     							mergeSort(a, 0, n-1 ); 
	cout<<endl;	
	for(int i=0 ; i<n  ; i++)
		cout<<a[i]<<" ";    
	cout<<endl;	
    return 0;  
}  
