
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int maximumPath(int N, vector<vector<int>> Matrix)
    {
        // code here
        int n=N;
        int dp[n][n];
        for(int j=0;j<n;j++){
            dp[0][j]=Matrix[0][j];
        }
        for(int i=1;i<n;i++){
            for(int j=0;j<n;j++){
                if(j==0){
                    dp[i][j]=max({dp[i-1][j],dp[i-1][j+1]})+Matrix[i][j];
                }
                if(j==n-1){
                    dp[i][j]=max({dp[i-1][j],dp[i-1][j-1]})+Matrix[i][j];
                }
                if(j>0 && j<n-1){
                    dp[i][j]=max({dp[i-1][j],dp[i-1][j-1],dp[i-1][j+1]})+Matrix[i][j];
                }
            }
        }
        int ans=INT_MIN;
        for(int j=0;j<n;j++){
            if(dp[n-1][j]>ans){
                ans=dp[n-1][j];
            }
        }
        return ans;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
