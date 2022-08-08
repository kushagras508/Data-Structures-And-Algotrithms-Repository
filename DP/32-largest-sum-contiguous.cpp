
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int maxSubarraySum(int arr[], int n){
        
        // Your code here
        int currsum=0, max_sum=INT_MIN;
        for(int i=0;i<n;i++){
            currsum+=arr[i];
            if(currsum<0){
                currsum=0;
            }
            if(currsum>max_sum){
                max_sum=currsum;
            }
        }
        return max_sum;
        
    }

int32_t main()
{
	FIO;
	

	return 0;
}
