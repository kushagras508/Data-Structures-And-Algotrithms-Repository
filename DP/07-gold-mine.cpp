
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int getGold(vector<vector<int>> &M, int row, int col, int m, int n){
    if (dp[row][col] != -1){
        return dp[row][col];
    }
    int x = 0, y = 0, z = 0;

    if (row > 0 && col < n - 1){
        x = getGold(M, row - 1, col + 1, m, n);
    }
    if (col < n - 1){
        y = getGold(M, row, col + 1, m, n);
    }
    if (row < m - 1 && col < n - 1){
        z = getGold(M, row + 1, col + 1, m, n);
    }

    return dp[row][col] = M[row][col] + max(max(x, y), z);
}

int maxGold(int m, int n, vector<vector<int>> &M){
    memset(dp, -1, sizeof(dp));
    int row = m - 1, maxGold = 0, gold;
    for (int i = 0; i <= row; i++){
        gold = getGold(M, i, 0, m, n);
        if (gold > maxGold){
            maxGold = gold;
        }
    }
    return maxGold;
}

int32_t main()
{
	FIO;
	

	return 0;
}
