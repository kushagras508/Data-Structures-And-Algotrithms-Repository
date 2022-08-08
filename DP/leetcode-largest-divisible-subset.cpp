
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    vector<int> largestDivisibleSubset(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>res(nums.size());
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
            for(int j=0;j<i;j++){
                if(nums[i]%nums[j]==0 && res[i].size()<res[j].size()){
                    res[i]=res[j];
                }
            }
            res[i].push_back(nums[i]);
            if(ans.size()<res[i].size()){
                ans=res[i];
            }
        }
        return ans;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
