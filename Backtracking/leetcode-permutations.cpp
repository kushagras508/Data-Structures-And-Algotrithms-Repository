
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<vector<int>>res;

void func(vector<int>& nums,vector<int>& ans){
	if (ans.size()==nums.size())
	{
		res.push_back(ans);
		return;
	}
	for (int i = 0; i < nums.size(); ++i)
	{
		if (find(ans.begin(),ans.end(),nums[i])==ans.end())
		{
			ans.push_back(nums[i]);
			func(nums,ans);
			ans.pop_back();
		}
	}
}

vector<vector<int>> permute(vector<int>& nums) {
 	vector<int>ans;
 	func(nums,ans);
 	return res;       
}

int32_t main()
{
	FIO;
	

	return 0;
}
