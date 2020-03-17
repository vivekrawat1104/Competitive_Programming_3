//Vector Ex
#include<bits/stdc++.h>
using namespace std;
int main(){
	vector<int> a1={1,2,3,4},a2={3,4,5,6,7,8};	
	vector<int> a(a1.size()+a2.size());
	vector<int> b(a1.size()+a2.size());
	vector<int>::iterator it1,it2;
	it1= set_union		(a1.begin(),a1.end(), a2.begin(), a2.end(), a.begin());
	it2= set_intersection	(a1.begin(),a1.end(), a2.begin(), a2.end(), b.begin());
	cout<<"Union\n";	
	for(int i=0 ; i<a.size() ; i++)		//UNION
		cout<<a.at(i)<< " ";
	cout<<"\nIntersection\n";	
	for(int i=0 ; i<b.size() ; i++)		//INTERSECTION
		cout<<b.at(i)<< " ";
}
