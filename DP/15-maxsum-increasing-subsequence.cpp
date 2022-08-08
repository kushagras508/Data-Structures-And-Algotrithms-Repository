
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
	int maxSumIS(int arr[], int n)  
	{  
	    // Your code goes here
	    int dp[n];
	    dp[0]=arr[0];
	    for(int i=1;i<n;i++){
	        dp[i]=arr[i];
	        for(int j=i-1;j>=0;j--){
	            if(arr[j]>=arr[i]){
	                continue;
	            }
	            int temp=arr[i]+dp[j];
	            if(temp>dp[i]){
	                dp[i]=temp;
	            }
	        }
	    }
	    return *max_element(dp,dp+n);
	}
int32_t main()
{
	FIO;
	

	return 0;
}
