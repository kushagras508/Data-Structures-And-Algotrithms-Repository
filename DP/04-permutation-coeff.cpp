
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int permu(int n, int r){
	vector<int>dp(n+1);
	dp[0]=1;
	for(int i=1;i<=n;i++){
		dp[i]=i*dp[i-1];
	}
	return (dp[n]/dp[n-r]);
}

int32_t main()
{
	FIO;
	

	return 0;
}
