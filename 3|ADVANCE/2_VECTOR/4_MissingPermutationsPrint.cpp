// 4. Print Missing Permutations
#include<bits/stdc++.h>
using namespace std;
void missing_strings( string *pgiven , int Size){
	vector<string> permutations;
	string input = pgiven[0];		  permutations.push_back(input); 
  	//generate all the permutations of the string in the vector "permutation". 
    while (true) 	{ 
				       	 string p = permutations.back(); 
					// Getting next permutation of input string 
					next_permutation(p.begin(), p.end()); 
					if (p == permutations.front()) 
					    break; 
					permutations.push_back(p); 
    			} 
	//PRINT
	cout<<"\nAll Permutations\n";   
  	for (auto i = permutations.begin(); 	i<permutations.end() ;		 i++) 
	{ 			cout<<*i<< " ";								}
	  //Copy All Permutations to SET
	set<string> permutations_set(pgiven,  pgiven + Size); 
	vector<string> missing; 
	set_difference(	permutations.begin(), permutations.end(), permutations_set.begin(), permutations_set.end(), 				back_inserter(missing)	); 
	//Print Missing Permutations	
	cout<<"\nMissing Permutations\n";   
 	 for (auto string i = missing.begin(); i != missing.end(); ++i) 
       		 cout << *i << " "; 

}

int main(){
	string Permutation_given[] = { 
       		"ABC","CAB","BAC"
  	  }; 
	cout<<"\nGiving Permutations\n";   
 	 for (int i = Permutation_given; *i!='\0'; ++i) 
       		 cout << *i << " "; 
    // size of permutation list 
    size_t Size= sizeof(Permutation_given) /   sizeof(*Permutation_given); 
  //	cout<<sizeof(Permutation_given) <<" "<<sizeof(*Permutation_given)<<" "<<Size_Permutation_given;
   missing_strings(Permutation_given,  Size); 
    return 0; 
}
