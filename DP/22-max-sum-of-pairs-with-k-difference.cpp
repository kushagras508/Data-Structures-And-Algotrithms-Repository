
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helper(int arr[], int n, int k){
    sort(arr,arr+n);
    int i=n-1;
    int sum=0;
    while(i>0){
        if(abs(arr[i]-arr[i-1])<k){
            sum+=arr[i]+arr[i-1];
            i=i-2;
        }
        else{
            i--;
        }
    }
    return sum;
}

int32_t main()
{
	FIO;
	

	return 0;
}
