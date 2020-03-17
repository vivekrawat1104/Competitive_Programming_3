//Vector Ex
#include<bits/stdc++.h>
using namespace std;
int main(){
/*	vector<int> a={1,4,3,2,5};
	for(int i=0 ; i<a.size() ; i++){
		cout<<a.at(i)<<" "; 	
	}cout<<endl;
	for(auto i=a.begin() ; i<a.end() ; i++){
		cout<<(*i)<<" "; 	
	}cout<<endl;
	reverse(a.begin(),a.end());
	for(auto i=a.begin() ; i<a.end() ; i++){
		cout<<(*i)<<" "; 	
	}cout<<endl;
	cout<<"min= "<<*( min_element( a.begin(),a.end() )  )<<endl;
	cout<<"max= "<<*( max_element( a.begin(),a.end() )  )<<endl;
	cout<<"sum= "<<accumulate(a.begin(),a.end(),0)<<endl;		
*/	
	//Functions:
	vector<int> ab={1,2,3};	
	ab.push_back(7);	cout<<ab.at(3)<<endl;		//7
	//ab.pop_back();	cout<<ab.at(3)<<endl;
	ab.insert(ab.begin(),-10);	cout<<ab.at(0)<<endl;//-10	
	ab.erase(ab.begin());	cout<<ab.at(0)<<endl;	//1
	ab.insert( max_element( ab.begin(),ab.end() ) , 50);	//1 2 3 50 7
	//Print
	for(auto i=ab.begin() ; i<ab.end() ; i++){
		cout<<(*i)<<" "; 	
	}cout<<endl;	
	ab.insert( min_element( ab.begin(),ab.end() ) , 5);	//5 1 2 3 50 7
	for(auto i=ab.begin() ; i<ab.end() ; i++){
		cout<<(*i)<<" "; 	
	}cout<<endl;

}
