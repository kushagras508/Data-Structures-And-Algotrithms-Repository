
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int longestSubsequence(int N, int A[])
    {
        // code here
        int n=N;
        int dp[n];
        for(int i=0;i<n;i++){
            dp[i]=1;
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(A[i]==A[j]-1 || A[i]==A[j]+1){
                    dp[i]=max(dp[i],dp[j]+1);
                }
            }
        }
        return *max_element(dp,dp+n);
    }

int32_t main()
{
	FIO;
	

	return 0;
}
