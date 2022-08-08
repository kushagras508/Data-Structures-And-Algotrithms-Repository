
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int nthcatalan(int n){
	vector<int>dp(2*n+1);
	dp[0]=1;
	for(int i=1;i<=2*n;i++){
		dp[i]=i*dp[i-1];
	}
	return dp[2*n]/(dp[n+1]*dp[n]);
}

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	cout<<nthcatalan(n)<<endl;

	return 0;
}
