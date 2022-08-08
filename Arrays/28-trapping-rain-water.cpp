
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int trappingWater(int arr[], int n){
        // Code here
        vector<int>left(n);
        vector<int>right(n);
        int leftmax=INT_MIN;
        for(int i=0;i<n;i++){
            leftmax=max(leftmax,arr[i]);
            left[i]=leftmax;
        }
        int rightmax=INT_MIN;
        for(int i=n-1;i>=0;i--){
            rightmax=max(rightmax,arr[i]);
            right[i]=rightmax;
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans+=min(left[i],right[i])-arr[i];
        }
        return ans;
    }
int32_t main()
{
	FIO;
	

	return 0;
}
