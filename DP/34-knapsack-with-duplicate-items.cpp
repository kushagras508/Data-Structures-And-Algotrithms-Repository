
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int knapSack(int N, int W, int val[], int wt[])
    {
        // code here
        int dp[W+1]={0};
        dp[0]=0;
        for(int i=0;i<N;i++){
            for(int j=1;j<=W;j++){
                if(wt[i]>j){
                    continue;
                }else{
                    dp[j]=max(dp[j],dp[j-wt[i]]+val[i]);
                }
            }
        }
        return dp[W];
    }

int32_t main()
{
	FIO;
	

	return 0;
}
