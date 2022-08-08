
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    long long countWays(int n, int k){
        // code here
        long long dp[n+1];
        memset(dp,0,sizeof(dp));
        dp[1]=k;
        dp[2]=k*k;
        for(int i=3;i<n+1;i++){
            dp[i]=((k-1)*(dp[i-1]+dp[i-2]))%m;
        }
        return dp[n];
    }

int32_t main()
{
	FIO;
	

	return 0;
}
