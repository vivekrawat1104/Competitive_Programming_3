//Vector Ex
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a={1,4,3,2,5};
	for(int i=0 ; i<a.size() ; i++){
		cout<<a.at(i)<<" "; 	
	}cout<<endl;
	
	//SORT
	for(auto j=a.begin(); j<a.end() ; j++){
		if( j!=min_element(j,a.end()) )
			swap(*j,*k);	
	}	
		cout<<"Sort\n";
		for(auto i=a.begin() ; i<a.end() ; i++){
		cout<<(*i)<<" "; 	
	}cout<<endl;

}
