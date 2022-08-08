
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int dp[11][51];
int helper(int n,int k){
    if(k==0 || k==1 || n==1){
        return k;
    }
    if(dp[n][k]!=-1){
        return dp[n][k];
    }
    int mini=INT_MAX;
    for(int i=1;i<=k;i++){
        int temp=1+max(helper(n-1,i-1),helper(n,k-i));
        mini=min(temp,mini);
    }
    return dp[n][k]=mini;
}
int eggDrop(int n, int k) 
{
    // your code here
    //int dp[n+1][k+1];
    memset(dp,-1,sizeof(dp));
    helper(n,k);
}

int32_t main()
{
	FIO;
	

	return 0;
}
