
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void func(int pos, vector<int>&ans, vector<int>&nums, vector<vector<int>>&res){
	for(int i=pos;i<nums.size();i++){
		ans.push_back(nums[i]);
		res.push_back(ans);
		func(i+1,ans,nums,res);
		ans.pop_back();
	}
}

vector<vector<int>> subsets(vector<int>& nums) {
  vector<vector<int>>res;
  vector<int>ans;
  res.push_back(ans);
  func(0,ans,nums,res);
  return res;      
}

int32_t main()
{
	FIO;
	

	return 0;
}
