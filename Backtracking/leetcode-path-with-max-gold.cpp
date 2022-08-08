
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int res=INT_MIN;
bool visited[20][20];

bool possible(int row, int col, vector<vector<int>>& grid){
	if(row<0 || row>=grid.size() || col<0 || col>=grid[0].size() || grid[row][col]==0 || visited[row][col]==1){
		return false;
	}
	return true;
}

void func(int row, int col,vector<vector<int>>& grid, int curr_val){
	visited[row][col]=1;
	if(possible(row-1,col,grid)){
		func(row-1,col,grid,curr_val+grid[row-1][col]);
	}
	if(possible(row+1,col,grid)){
		func(row+1,col,grid,curr_val+grid[row+1][col]);
	}
	if(possible(row,col-1,grid)){
		func(row,col-1,grid,curr_val+grid[row][col-1]);
	}
	if(possible(row,col+1,grid)){
		func(row,col+1,grid,curr_val+grid[row][col+1]);
	}
	visited[row][col]=0;
	res=max(res,curr_val);
}
int getMaximumGold(vector<vector<int>>& grid) {
  memset(visited,0,sizeof(visited));
  for(int i=0;i<grid.size();i++){
  	for(int j=0;j<grid[0].size();j++){
  		if(grid[i][j]!=0 && visited[i][j]==0){
  			func(i,j,grid,grid[i][j]);
  		}
  	}
  }
  return res;      
}

int32_t main()
{
	FIO;
	

	return 0;
}
