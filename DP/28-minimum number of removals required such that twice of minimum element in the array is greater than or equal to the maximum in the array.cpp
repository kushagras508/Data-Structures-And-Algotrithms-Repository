
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

	int minRemoval(int arr[], int n) {
	    // code here
	    sort(arr,arr+n);
	    int ans=0;
	    for(int i=0;i<n;i++){
	        int idx=upper_bound(arr,arr+n,2*arr[i])-arr;
	        ans=max(ans,idx-i);
	    }
	    return n-ans;
	}

int32_t main()
{
	FIO;
	

	return 0;
}
