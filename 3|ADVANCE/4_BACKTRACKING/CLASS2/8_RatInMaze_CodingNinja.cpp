#include<bits/stdc++.h>
using namespace std;
#define N 4
void printSolution(int solution[][N], int n){
	for(int i=0 ; i< n ; i++)
	{	for(int j=0 ; j<n ; j++)
			cout<<solution[i][j]<<" ";
		cout<<endl;
	}
}
void mazeHelp(int maze[][N], int n, int solution[][N], int x, int y){
	if(x==n-1 && y==n-1){
		solution[x][y]=1;
		cout<<"Solution :\n";	printSolution(solution,n);//Solution Print		
	}
	if(x>=n  || y>=n || maze[x][y]==0 || solution[x][y]==1){
		return;
	}
	solution[x][y] = 1;
	mazeHelp(maze,n,solution,x+1,y    );     //Down
	mazeHelp(maze,n,solution,x    ,y+1);     //Right
	solution[x][y]=0;	
}

void ratinmaze(int maze[][N], int n){
/*	int** solution = new int*[n];
	for(int i=0; i<n ; i++){
		solution[i]=new int*[n];	
	}
*/	int solution[N][N]={0};		
	mazeHelp(maze,n,solution,0,0);
}
int main(){
	
	int maze[N][N] =	     { { 1, 0, 0, 0 }, 
					{ 1, 1, 0, 1 }, 
					{ 0, 1, 0, 0 }, 
					{ 1, 1, 1, 1 } }; 
	cout<<"Maze :\n";	printSolution(maze,N);//Print Maze
	ratinmaze(maze,N); 
	return 0; 
}
