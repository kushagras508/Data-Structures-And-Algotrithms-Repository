
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<pair<int,int>>directions={{-2, -1}, {-1, -2}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}};

bool func(vector<vector<int>>&grid,int n, int curr_move, pair<int,int>curr_cordinates){
	if(curr_move==(n*n)+1){
		return true;
	}
	if(curr_cordinates.first<0 || curr_cordinates.first>=n || curr_cordinates.second<0 || curr_cordinates.second>=n || grid[curr_cordinates.first][curr_cordinates.second]>0){
		return false;
	}
	grid[curr_cordinates.first][curr_cordinates.second]=curr_move++;
	for(auto x:directions){
		int new_x=curr_cordinates.first+x.first;
		int new_y=curr_cordinates.second+x.second;
		if(func(grid,n,curr_move,{new_x,new_y})){
			return true;
		}
	}
	grid[curr_cordinates.first][curr_cordinates.second]=0;
	return false;
}

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	vector<vector<int>>grid(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			grid[i][j]=0;
		}
	}
	func(grid,n,1,{0,0});
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<grid[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
