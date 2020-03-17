//1. COUNT INVERSION PAIRS
#include<bits/stdc++.h>
using namespace std;
int count=0;
int merge(int *a, int start, int mid, int end){
	int  n1=mid-start+1, n2=end-mid;
	int L[n1],R[n2];
	int i,j,k,midindex=mid+1;
	for(i=0; i<n1; i++)	L[i]=a[start+i];	//Copy Left   Half
	for(j=0; j<n2; j++)	R[j]=a[mid+1+j];	//Copy Right Half
	i=0, j=0, k=start ;
	while( i<n1 && j<n2 ){
		if(L[i]<R[j]){
			a[k++]=L[i++];			
		}
			else{  count+=(midindex-i);
				a[k++]=R[j++];				
		}
	}
		while(i<n1)	a[k++]=L[i++];	//Copy Left
		while(j<n2)	a[k++]=R[j++];	//Copy Right
	return count;
}
void mergeSort(int *a,  int start, int end){
	if(start<end){
		int mid=(start+(end-start))/2;	
		mergeSort(a, start    , mid);
		mergeSort(a, mid+1 , end);
		int count=merge(a, start, mid, end);	
		    cout << " Number of inversions are " << count;   	
	}	
	//return count;
}	
int main()  
{  
    int arr[] = { 1, 20, 6, 4, 5 };  
    int n = sizeof(arr)/sizeof(arr[0]);  
   mergeSort(arr, 0, n-1 ); 
    return 0;  
}  
