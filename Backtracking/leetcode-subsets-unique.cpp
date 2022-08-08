
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<vector<int>>res;

void func(vector<int>&nums, vector<int>&ans, vector<vector<int>>&res, int pos){
	for(int i=pos;i<nums.size();i++){
		if(i>pos && nums[i]==nums[i-1]){
			continue;
		}
		ans.push_back(nums[i]);
		res.push_back(ans);
		func(nums,ans,res,i+1);
		ans.pop_back();
	}
}

vector<vector<int>> subsetsWithDup(vector<int>& nums) {
   sort(nums.begin(),nums.end());
   vector<int>ans;
   res.push_back(ans);
   func(nums,ans,res,0);
   return res;     
}

int32_t main()
{
	FIO;
	

	return 0;
}
