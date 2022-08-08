
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int findNumberOfLIS(vector<int>& nums) {
	
	vector<pair<int,int>>dp(nums.size(),{1,1});//count and length
	int maxlen=0;
	for(int i=0;i<nums.size();i++){
		for(int j=0;j<i;j++){
			if(nums[i]>nums[j]){
				if(dp[i].second==1+dp[j].second){
					dp[i].first+=dp[j].first;
				}
				else if(dp[i].second<1+dp[j].second){
					dp[i].first=dp[j].first;
					dp[i].second=1+dp[j].second;
				}
			}
		}
		maxlen=max(maxlen,dp[i].second);
	}        
	int ans=0;
	for(int i=0;i<nums.size();i++){
		if(dp[i].second==maxlen){
			ans+=dp[i].first;
		}
	}
	return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
