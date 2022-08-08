
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool canPartition(vector<int>& nums) {
	
	int sum=0;
	for(int i=0;i<nums.size();i++){
		sum+=nums[i];
	}        
	if(sum%2!=0){
		return false;
	}
	int targetsum=sum/2;
	vector<bool>dp(targetsum+1,false);
	dp[0]=true;
	for(int i=0;i<nums.size();i++){
		for(int j=targetsum;j>=nums[i];j--){
			dp[j]=dp[j]|dp[j-nums[i]];
		}
	}
	return dp[targetsum];
}

int32_t main()
{
	FIO;
	

	return 0;
}
