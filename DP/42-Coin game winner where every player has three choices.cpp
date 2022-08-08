
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool findWinner(int x, int y, int n)
{
    int dp[n + 1];
 
    dp[0] = false;
    dp[1] = true;
    for (int i = 2; i <= n; i++) {
        if (i - 1 >= 0 and !dp[i - 1])
            dp[i] = true;
        else if (i - x >= 0 and !dp[i - x])
            dp[i] = true;
        else if (i - y >= 0 and !dp[i - y])
            dp[i] = true;
 
        // Else A loses game.
        else
            dp[i] = false;
    }
 
    return dp[n];
}

int32_t main()
{
	FIO;
	

	return 0;
}
