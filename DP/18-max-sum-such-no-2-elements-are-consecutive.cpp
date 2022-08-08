
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int FindMaxSum(int arr[], int n)
    {
        // Your code here
        vector<int>dp(n);
        dp[0]=arr[0];
        dp[1]=max(arr[0],arr[1]);
        for(int i=2;i<n;i++){
        	dp[i]=max(dp[i-1],dp[i-2]+arr[i]);
        }
        return dp[n-1];

    }

int32_t main()
{
	FIO;
	

	return 0;
}
