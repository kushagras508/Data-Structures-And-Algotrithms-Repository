
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int maxsumWO3Consec(int arr[], int n)
{
    
    int dp[n];
    if (n == 1)
        dp[0] = arr[0];
   
    if (n == 2)
        dp[1] = arr[0] + arr[1];
   
    if (n == 3)
        dp[2] = max(dp[1], max(arr[1] +
                               arr[2], arr[0] + arr[2]));
    for (int i = 3; i < n; i++)
        dp[i] = max(max(dp[i - 1], dp[i - 2] + arr[i]),
                     arr[i] + arr[i - 1] + dp[i - 3]);
   
    return dp[n - 1];
}

int32_t main()
{
	FIO;
	

	return 0;
}
