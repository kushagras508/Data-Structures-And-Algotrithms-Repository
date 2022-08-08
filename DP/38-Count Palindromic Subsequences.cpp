
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int dp[1000][1000];
int helper(string s, int start, int end){
    if(start>end){
        return 0;
    }
    else if(start==end){
        return 1;
    }
    else if(dp[start][end]!=-1){
        return dp[start][end];
    }
    else if(s[start]==s[end]){
        return dp[start][end]=1+helper(s,start+1,end)+helper(s,start,end-1);
    }
    else{
        return dp[start][end]=helper(s,start+1,end)+helper(s,start,end-1)-helper(s,start+1,end-1);
    }
}
int countPS(string str)
{
   //Your code here
   int n=str.length();
   memset(dp,-1,sizeof(dp));
   return helper(str,0,n-1);
   
}

int32_t main()
{
	FIO;
	

	return 0;
}
