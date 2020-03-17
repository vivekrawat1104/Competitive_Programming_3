//8. Subarray of zero sum.
 #include<bits/stdc++.h>
using namespace std;
int subsetzero(int a[], int n){
	unordered_set<int,int> hash;
	for(int i=0,sum=0 ; i<n ; i++){
		sum=a[i];
		if(hash.find(sum)==hash.end()){
			return 1;
		}
		else{		
			hash.insert(sum);
		}
	}
	return 0;
}
int main(){
	int a[]={5,7,10,-3,-4,-3,8,15}, n=8;
	if (subsetzero(a, n)) 
        	cout << "Found a subarray with 0 sum"; 
    	else
        	cout << "No Such Sub Array Exists!"; 
}
