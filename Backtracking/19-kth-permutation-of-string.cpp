
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
void func(vector<int>& nums,vector<int>& ans, vector<bool>&visited, vector<vector<int>>&res){
	if(ans.size()==nums.size()){
		res.push_back(ans);
		return;
	}
	for(int i=0;i<nums.size();i++){
		if(!visited[i]){
			if(i>0 && nums[i]==nums[i-1] && !visited[i-1]){
				continue;
			}
				visited[i]=true;
				ans.push_back(nums[i]);
				func(nums,ans,visited,res);
				visited[i]=false;
                ans.pop_back();
				
			
		}
	}
}
 vector<vector<int>> permuteUnique(vector<int>& nums){
 	sort(nums.begin(),nums.end());
 	vector<int>ans;
 	vector<bool>visited(nums.size(),false);
      vector<vector<int>>res;
 	
 	func(nums,ans,visited,res);
 	return res;
 }
int32_t main()
{
	FIO;
	int n,k;
	cin>>n>>k;
	vector<int>nums(n);
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		nums.push_back(a);
	}
	vector<vector<int>>ans=permuteUnique(nums);

	return 0;
}
