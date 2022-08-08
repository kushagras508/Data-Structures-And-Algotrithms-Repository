
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int longestCommonSubsequence(string text1, string text2) {
      int n=text1.length();
      int m=text2.length();
      if(n==0 || m==0){
      	return 0;
      }  
      vector<vector<int>>dp(n+1,vector<int>(m+1,0));
      for(int i=0;i<=n;i++){
      	for(int j=0;j<=m;j++){
      		if(i==0 || j==0){
      			dp[i][j]=0;
      		}else if(text1[i-1]==text2[j-1]){
      			dp[i][j]=1+dp[i-1][j-1];
      		}
      		else{
      			dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
      		}
      	}
      }
      return dp[n][m];
}

int32_t main()
{
	FIO;
	

	return 0;
}
