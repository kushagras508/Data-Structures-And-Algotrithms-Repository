
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<vector<int>>nearest(vector<vector<int>>grid) {
	int n = grid.size();
	int m = grid[0].size();
	vector<vector<int>>res(n, vector<int>(m, INT_MAX));
	int dx[] = { -1, 0, 0, 1};
	int dy[] = {0, -1, 1, 0};
	queue<pair<int, int>>q;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (grid[i][j] == 1) {
				q.push({i, j});
				res[i][j] = 0;
			}
		}
	}
	while (!q.empty()) {
		pair<int, int> frnt = q.front();
		q.pop();
		int curr_row = frnt.first;
		int curr_col = frnt.second;
		for (int i = 0; i < 4; i++) {
			int new_row = curr_row + dx[i];
			int new_col = curr_col + dy[i];
			if (new_row >= 0 && new_row < n && new_col >= 0 && new_col < m){
				if (res[new_row][new_col] > res[curr_row][curr_col] + 1) {
					res[new_row][new_col] = res[curr_row][curr_col] + 1;
					q.push({new_row, new_col});
				}
			}
		}
	}
	return res;
}

int32_t main()
{
	FIO;
	int n,m;
	cin>>n>>m;
	vector<vector<int>>arr(n,vector<int>(m));
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	vector<vector<int>>ans=nearest(arr);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cout<<arr[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
