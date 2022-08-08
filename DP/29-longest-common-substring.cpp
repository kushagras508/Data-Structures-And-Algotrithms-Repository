
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helper(string s1, string s2){

    int m=s1.length();
    int n=s2.length();
    int dp[m+1][n+1];
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
            else if(s1[i-1]==s2[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=0;
            }
        }
    }
 int ans=0;
 for(int i=1;i<m+1;i++){
    for(int j=1;j<n+1;j++){
        if(dp[i][j]>ans){
            ans=dp[i][j];
        }
    }
 }
 return ans;
}


int32_t main()
{
	FIO;
	

	return 0;
}
