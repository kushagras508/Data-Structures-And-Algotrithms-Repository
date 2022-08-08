
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int findDuplicate(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(nums[abs(nums[i])]>=0){
                nums[abs(nums[i])]=-nums[abs(nums[i])];
            }
            else{
                ans= abs(nums[i]);
            }
        
    }return ans;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
