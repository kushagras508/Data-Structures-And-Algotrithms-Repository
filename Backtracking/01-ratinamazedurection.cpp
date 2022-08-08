
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int n;
//vector<vector<int>>grid(4,vector<int>(4));
int visited[4][4]={0};
void func(int row, int col, vector<vector<int>>&grid, int n, string s, vector<string>&res){
	if(row<0 || row>n-1 || col<0 || col>n-1 || grid[row][col]==1 || visited[row][col==1]){
		return;
	}
	if(row==n-1 && col==n-1){
		res.push_back(s);
		return;
	}else{
		visited[row][col]=1;
		func(row+1,col,grid,n,s+'D',res);
		func(row+1,col,grid,n,s+'U',res);
		func(row+1,col,grid,n,s+'R',res);
		func(row+1,col,grid,n,s+'L',res);
		visited[row][col]=0;
	}
}
int32_t main()
{
	FIO;
	cin>>n;
	vector<vector<int>>grid(4,vector<int>(4));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>grid[i][j];
		}
	}
	vector<string>res;
	vector<string>result=func(0,0,grid,n,"",res);
	if(result.size()==0){
		cout<<"-1"<<endl;
	}else{
		for(auto x:result){
			cout<<x<<" ";
		}
		cout<<endl;
	}


	return 0;
}
