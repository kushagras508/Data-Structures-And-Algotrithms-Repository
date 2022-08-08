
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int smallestSumSubarr(int arr[], int n)
{
    int min_ending_here = INT_MAX;
    int min_so_far = INT_MAX;
    for (int i=0; i<n; i++)
    {
        if (min_ending_here > 0)
            min_ending_here = arr[i];    
        else
            min_ending_here += arr[i];
        min_so_far = min(min_so_far, min_ending_here);            
    }
    return min_so_far;
}

int32_t main()
{
	FIO;
	

	return 0;
}
