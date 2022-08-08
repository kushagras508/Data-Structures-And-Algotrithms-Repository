
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<string>res;
void func(int row, int col,vector<vector<int>> &m, int n, string ans){
	if(row<0 || row>=n || col<0 || col>=n || m[row][col]==0 || m[row][col]==100){
		return;
	}
	else if(row==n-1){
		res.push_back(ans);
		return;
	}
	else{
		m[row][col]=100;
		func(row+1,col,m,n,ans+"D");
		func(row-1,col,m,n,ans+"U");
		func(row,col+1,m,n,ans+"R");
		func(row,col-1,m,n,ans+"L");
		m[row][col]=1;
	}
}
vector<string> findPath(vector<vector<int>> &m, int n) {

	string ans="";
	func(0,0,m,n,ans);
	sort(res.begin(),res.end());
	return res;

}

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	vector<vector<int>>m(n,vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>m[i][j];
		}
	}
	vector<string>ans=findPath(m,n);
	int len=INT_MAX;
	for(auto x:ans){
		int curr=x.length();
		len=min(len,curr);
	}
	cout<<len<<endl;
	return 0;
}
