
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


    int maxProfit(int K, int N, int A[])
    {
        // code here
        int dp[K+1][N];
        for(int i = 0; i <= K; i++)
            dp[i][0] = 0;
        for(int j = 0; j < N; j++)
            dp[0][j] = 0;
        for(int i = 1; i <= K; i++)
        {
            int maxi = INT_MIN;
            for(int j = 1; j < N; j++)
            {
                maxi = max(maxi, dp[i-1][j-1] - A[j-1]);
                dp[i][j] = max(maxi + A[j], dp[i][j-1]);
            }
        }
        return dp[K][N-1];
    }

int32_t main()
{
	FIO;
	

	return 0;
}
