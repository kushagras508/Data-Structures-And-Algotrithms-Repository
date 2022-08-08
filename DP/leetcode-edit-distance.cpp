
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int minDistance(string word1, string word2) {
	int n=word1.length();
	int m=word2.length();
	vector<vector<int>>dp(n+1,vector<int>(m+1));
	for(int i=0;i<=n;i++){
		for(int j=0;j<=m;j++){
			if(i==0){
				dp[i][j]=j;
			}
			else if(j==0){
				dp[i][j]=i;
			}
			else if(word1[i-1]==word2[j-1]){
				dp[i][j]=dp[i-1][j-1];
			}else{
				dp[i][j]=1+min({dp[i-1][j-1],dp[i-1][j],dp[i][j-1]});
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
