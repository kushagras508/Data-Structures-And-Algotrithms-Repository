
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int countFriendsPairings(int n){ 
        // code here
	vector<long long>dp(n+1);
	dp[0]=1;
	dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=(dp[i-1]+((i-1)*dp[i-2])%1000000007)%1000000007;
	}
	return dp[n];
}

int32_t main()
{
	FIO;
	

	return 0;
}
