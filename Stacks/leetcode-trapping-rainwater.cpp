
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int trap(vector<int>& height) {
        
        int n=height.size();
        vector<int>left(n);
        vector<int>right(n);

        int leftmax=INT_MIN;
        for(int i=0;i<n;i++){
        	leftmax=max(leftmax,height[i]);
        	left[i]=leftmax;
        }
        int rightmax=INT_MIN;
        for(int i=n-1;i>=0;i--){
        	rightmax=max(rightmax,height[i]);
        	right[i]=rightmax;
        }

        int ans=0;
        for(int i=0;i<n;i++){
        	ans+=min(left[i],right[i])-height[i];
        }
        return ans;
}

int trap_2(vector<int>&height){
	int n=height.size();
	int left=0, right=n-1;
	int leftmax=INT_MIN, rightmax=INT_MIN;
	int ans=0
	while(left<right){
		if(height[left]>height[right]){// if left tower > right tower so that means water holding capacity is dependent on right side's height
			if(height[right]>rightmax){// is the currrent right tower is the biggest we have seen from the right end?. If yes, update the rmax to the current index.
				rightmax=height[right];
			}else{
				ans+=(rightmax-height[right]);// otherwise, calculate the total water from current index to tallest tower to the right, i.e rmax
			}
			right--;
		}
		else{
			if(height[left]>leftmax){
				leftmax=height[left];
			}else{
				ans+=(leftmax-height[left]);
			}
			left++;
		}
	}
	return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
