
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int minimumCost(int cost[], int N, int W) 
	{ 
        // Your code goes here
        vector<long long int>val,wt;
        long long int size=0;
        for(long long int i=0;i<N;i++){
            if(cost[i]!=-1){
                val.push_back(cost[i]);
                wt.push_back(i+1);
                size++;
            }
        }
        N=size;
        long long int dp[N+1][W+1];
        for(long long int j=0;j<=W;j++){
            dp[0][j]=INT_MAX;
        }
        for(long long int i=1;i<=N;i++){
            dp[i][0]=0;
        }
        for(long long int i=1;i<=N;i++){
            for(long long int j=1;j<=W;j++){
                if(wt[i-1]>j){
                    dp[i][j]=dp[i-1][j];
                }else{
                    dp[i][j]=min({dp[i-1][j],dp[i][j-wt[i-1]]+val[i-1]});
                }
            }
        }
        return ((dp[N][W]==INT_MAX)?-1:dp[N][W]);
	} 

int32_t main()
{
	FIO;
	

	return 0;
}
