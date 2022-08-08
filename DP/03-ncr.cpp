
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int nCr(int n, int r){
    int mod = 1e9+7;
    long long int dp[n+2][r+2];
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= r; j++) {
            if (i < j) dp[i][j] = 0;
            else if (j == 0) dp[i][j] = 1;
            else dp[i][j] = (dp[i-1][j] + dp[i-1][j-1])%mod;
        }
    }
    return dp[n][r];
}

int32_t main()
{
	FIO;
	

	return 0;
}
