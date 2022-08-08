
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helper(long long arr[], int n, int m){
    sort(arr,arr+n);
    int diff=INT_MAX;
    for(int i=0;i+m-1<n;i++){
        int mindiff=arr[i+m-1]-arr[i];
        if(mindiff<diff){
            diff=mindiff;
        }
    }
    return diff;
}
int32_t main()
{
	FIO;
	

	return 0;
}
