
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int getMinDiff(int arr[], int n, int k) {
        // code here
	sort(arr,arr+n);
	int res=arr[n-1]-arr[0];
	int smallest=arr[0]+k, largest=arr[n-1]-k;
	for(int i = 0; i < n-1; i++){
        int minn = min(smallest, arr[i+1]-k);
        int maxx = max(largest, arr[i]+k);
        if(minn < 0) continue;
        res = min(res, maxx-minn);
    }
	return res;
}

int32_t main()
{
	FIO;
	

	return 0;
}
