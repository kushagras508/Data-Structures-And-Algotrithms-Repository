
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int countder(int n)
{
    int dp[n + 1] = {0};
    dp[1] = 0;
    dp[2] = 1;
    for (int i = 3; i <= n; ++i)
        dp[i] = (i - 1) * (dp[i - 1] +dp[i - 2]);
 
    return dp[n];
}

int32_t main()
{
	FIO;
	

	return 0;
}
