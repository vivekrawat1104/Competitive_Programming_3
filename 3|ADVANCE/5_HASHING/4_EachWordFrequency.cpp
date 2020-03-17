//4. Find Frequency of each element.
#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[]="my name is name my";
	unordered_map<string,int>	wordfreq;
	stringstream ss(str);
	string word;
	while(ss>>word)
		wordfreq[word]++;
	for(auto it=wordfreq.begin(); it!=wordfreq.end() ; it++)
		cout<<(it->first)<<" -> "<<(it->second)<<endl;

}
