
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helper(int n, int x, int y, int z, int dp[]){
    if(n==0){
        return 0;
    }
    if(n<0){
        return INT_MIN;
    }
    if(dp[n]!=-1){
        return dp[n];
    }
    int a=1+helper(n-x,x,y,z,dp);
    int b=1+helper(n-y,x,y,z,dp);
    int c=1+helper(n-z,x,y,z,dp);
    return dp[n]=max({a,b,c});
}
int maximizeTheCuts(int n, int x, int y, int z)
{
    //Your code here
    int dp[n+1];
    memset(dp,-1,sizeof(dp));
    int ans= helper(n,x,y,z,dp);
    if(ans<0){
        return 0;
    }
    return ans;
}
int32_t main()
{
	FIO;
	

	return 0;
}
