
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    vector<int> nextGreaterElements(vector<int>& nums) {
        vector<int>nums2(2*nums.size());
        for(int i=0;i<nums2.size();i++){
        	nums2[i]=nums[i%(nums.size())];
        }
        vector<int>right(nums2.size());
        stack<int>s;
        for(int i=nums2.size()-1;i>=0;i--){
        	if(s.size()==0){
        		right.push_back(-1);
        	}
        	else if(s.size()>0 && nums2[i]>=nums2[s.top()]){
        		while(s.size()>0 && nums2[i]>=nums2[s.top()]){
        			s.pop();
        		}
        		if(s.size()==0){
        			right.push_back(-1);
        		}
        		else{
        			right.push_back(nums2[s.top()]);
        		}
        	}
        	else{
        		right.push_back(nums2[s.top()]);
        	}
        	s.push(i);
        }
        reverse(right.begin(),right.end());
        vector<int>ans;
        for(int i=0;i<nums.size();i++){
        	ans.push_back(right[i]);
        }
        return ans;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
