
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

 long long int count( int S[], int m, int n )
    {
       
        //code here.
        long long int dp[n+1]={0};
        dp[0]=1;
        for(int i=0;i<m;i++){
            for(int j=1;j<=n;j++){
                if(S[i]>j){
                    continue;
                }else{
                    dp[j]=dp[j]+dp[j-S[i]];
                }
            }
        }
        return dp[n];
    }

int32_t main()
{
	FIO;
	

	return 0;
}
