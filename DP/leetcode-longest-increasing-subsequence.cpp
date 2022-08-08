
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

//o(N^2)
int lengthOfLIS(vector<int>& nums) {
    int n=nums.size();
        vector<int>lis(n+1,1);
        for(int i=0;i<nums.size();i++){
        	for(int j=0;j<i;j++){
        		if(nums[i]>nums[j]){
        			lis[i]=max(lis[i],1+lis[j]);
        		}
        	}
        }
        int ans=0;
        for(int i=0;i<n;i++){
        	ans=max(ans,lis[i]);
        }
        return ans;
}
//o(N^2)
 int lengthOfLIS(vector<int>& nums) {
        int lisdp[nums.size()];
        lisdp[0]=1;
        for(int i=1;i<nums.size();i++){
            lisdp[i]=1;
            for(int j=i-1;j>=0;j--){
                if(nums[j]>=nums[i]){
                    continue;
                }
                int curr_ans=1+lisdp[j];
                if(curr_ans>lisdp[i]){
                    lisdp[i]=curr_ans;
                }
            }
        }
        return *max_element(lisdp,lisdp+nums.size());
    }
//O(NlogN)
int longestSubsequence(int n, int a[]){
       // your code here
        vector<int> lisdp;
	    lisdp.push_back(a[0]);

	    for(int i = 1; i < n; i++){
		    if(a[i] > lisdp.back()){
			    lisdp.push_back(a[i]);
		    }
		    else{
			    int index = lower_bound(lisdp.begin() , lisdp.end() , a[i])-lisdp.begin();
			    lisdp[index] = a[i];
		    }
	    }
	    return lisdp.size();
}

int32_t main()
{
	FIO;
	

	return 0;
}
