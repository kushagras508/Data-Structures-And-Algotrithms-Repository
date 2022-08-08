
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    long long int countBT(int h) { 
        // code here
         long long int dp[h+1]={0};
    dp[0]=1;
    dp[1]=1;
    for(int i=2;i<=h;i++){
        dp[i]=(dp[i-1]*((2*dp[i-2])%1000000007+dp[i-1])%1000000007)%1000000007;
    }
    return dp[h];
    }
int32_t main()
{
	FIO;
	

	return 0;
}
