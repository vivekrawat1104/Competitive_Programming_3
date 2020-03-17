// 1. Remove -ve elements
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a;	int n,t;	cout<<"n= ";	cin>>n;
	for (int i = 0; i < n; i++) 
       {	cin>>t; 	a.push_back(t);	} 
	for (int i = 0; i < n; i++) 
       {	cout<<a[i]<<" ";		}
	//REMOVE -VEs 	
    for (auto i = a.begin(); i<a.end(); i++) { 
        if (*i<0) { 
            	a.erase(i); 
            	i--; 
        } 
    } 		
	//PRINT
	cout<<endl;
	for (auto i = a.begin(); i<a.end(); i++) { 
			cout<<*i<< " ";	
    } 
}
