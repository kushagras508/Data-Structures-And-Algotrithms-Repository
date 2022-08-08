
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int helper(int arr[50][50], int n, int m){
    int dp[n][m];
    for(int j=0;j<m;j++){
        dp[0][j]=arr[0][j];
    }
    for(int i=0;i<n;i++){
        dp[i][0]=arr[i][0];
    }
    for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(arr[i][j]==1){
                dp[i][j]=1+min({dp[i-1][j],dp[i][j-1],dp[i-1][j-1]});
            }else{
                dp[i][j]=0;
            }
        }
    }
    int currmax=dp[0][0];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(dp[i][j]>currmax){
                currmax=dp[i][j];
            }
        }
    }
    return currmax;
}
int32_t main()
{
	FIO;
	

	return 0;
}
