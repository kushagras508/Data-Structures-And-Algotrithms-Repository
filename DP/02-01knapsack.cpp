
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int knapSack(int W, int wt[], int val[], int n) 
{ 
   // Your code here
   int dp[n+1][W+1];
   for(int i=0;i<=n;i++){
       for(int j=0;j<=W;j++){
           if(i==0 || j==0){
               dp[i][j]=0;
           }
           else if(wt[i-1]>j){
               dp[i][j]=dp[i-1][j];
           }else{
               dp[i][j]=max(dp[i-1][j],val[i-1]+dp[i-1][j-wt[i-1]]);
           }
       }
   }
   return dp[n][W];
}
int32_t main()
{
	FIO;
	

	return 0;
}
