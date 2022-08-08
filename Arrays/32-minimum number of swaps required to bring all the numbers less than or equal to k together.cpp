
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helper(int arr[], int n, int k){
    int good=0;
    for(int i=0;i<n;i++){
        if(arr[i]<=k){
            good++;
        }
    }
    int bad=0;
    for(int i=0;i<good;i++){
        if(arr[i]>k){
            bad++;
        }
    }
    int ans=bad;
    for(int i=0,j=good;j<n;i++,j++){
        if(arr[j]>k){
            bad++;
        }
        if(arr[i]>k){
            bad--;
        }
        ans=min(ans,bad);
    }
    return ans;
}
int32_t main()
{
	FIO;
	

	return 0;
}
