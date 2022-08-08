
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool isSafe(vector<vector<int>> &grid, int n, int m, int i, int j)
{
return (i >= 0 && i < n && j >= 0 && j < m && grid[i][j] == 1);
}

int orangesRotting(vector<vector<int>> &grid)

{
	int n = grid.size();
	int m = grid[0].size();
	int total = -1;

queue<pair<int, int>> q;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (grid[i][j] == 2){
				q.push({i, j});
			}
		}
	}
vector<vector<int>> dir = {{ -1, 0}, {1, 0}, {0, -1}, {0, 1}};
	while (q.empty() == false){
		int count = q.size();
		for (int k = 0; k < count; k++){
			pair<int, int> index = q.front();
			int i = index.first;
			int j = index.second;
			for (int tol = 0; tol < 4; tol++) {
				int r = dir[tol][0] + i;
				int c = dir[tol][1] + j;
				if (isSafe(grid, n, m, r, c)) {
				grid[r][c] = 2;
				q.push({r, c});
			}
		}

		q.pop();
	}

	total++;
}

		for (int i = 0; i < n; i++){
			for (int j = 0; j < m; j++){
				if (grid[i][j] == 1){
					return -1;
				}
			}
		}

return total;
}

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	vector<vector<int>>grid(n, vector<int>(n));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>grid[i][j];
		}
	}
	cout<<orangesRotting(grid)<<endl;
	

	return 0;
}
