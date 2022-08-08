
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int lastStoneWeightII(vector<int>& stones) {
	
	if(stones.size()==0){
		return 0;
	}        
	int sum=0;
	for(int i=0;i<stones.size();i++){
		sum+=stones[i];
	}
	int targetsum=sum/2;
	vector<int>dp(targetsum+1);
	for(int i=0;i<stones.size();i++){
		for(int j=targetsum;j>=stones[i];j--){
			dp[j]=max({dp[j],dp[j-stones[i]]+stones[i]});
		}
	}
	int ans=sum-2*dp[targetsum];
	return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
