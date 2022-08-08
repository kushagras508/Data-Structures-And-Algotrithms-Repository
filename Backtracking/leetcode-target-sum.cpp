
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

 int cnt=0;
    void func(vector<int>&nums, int S, int pos, int curr_sum){
        if(pos==nums.size()){
            if(curr_sum==S){
                cnt++;
            }
        }else{
            func(nums,S,pos+1,curr_sum+nums[pos]);
            func(nums,S,pos+1,curr_sum-nums[pos]);
        }
    }
    int findTargetSumWays(vector<int>& nums, int S) {
        func(nums,S,0,0);
        return cnt;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
