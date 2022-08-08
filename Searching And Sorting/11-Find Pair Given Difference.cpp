
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helper(int arr[], int n, int k){
	sort(arr,arr+n);
    int i=0, j=1;
    while(i<n && j<n){
        if(i!=j && arr[j]-arr[i]==k){
            return 1;
        }
        else if(arr[j]-arr[i]<k){
            j++;
        }
        else{
            i++;
        }
    }
    return -1;
}

int32_t main()
{
	FIO;
	

	return 0;
}
