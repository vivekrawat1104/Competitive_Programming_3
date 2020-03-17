// Graph
#include<bits/stdc++.h>
using namespace std;
void addedge(vector<int> adj[], int v1 , int v2){
	adj[v1].push_back(v2);
	adj[v2].push_back(v1);	
}
void printg(vector <int> adj[], int v){
	for(int i=0 ; i<v ; i++){
		cout<<i;
		for(auto x:adj[i])
			cout<<"->"<<x;
		cout<<endl;	
	}
}
int main(){
	int v,e,v1,v2;
	cout<<"v,e = ";	cin>>v>>e;
	vector<int> adj[v];
	for(int i=0 ; i<e ; i++){
		cin>>v1>>v2;
		addedge(adj,v1,v2);	
	}
	printg(adj,v);
} 
