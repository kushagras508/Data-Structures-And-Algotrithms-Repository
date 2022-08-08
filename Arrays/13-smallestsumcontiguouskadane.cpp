
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int smallestSumSubarr(int arr[], int n)
{
    int curr_sum = INT_MAX;
    int min_sum = INT_MAX;
      
    for (int i=0; i<n; i++)
    {
        if (curr_sum > 0)
            curr_sum = arr[i];    
        else
            curr_sum += arr[i];
          
        min_sum = min(min_sum, curr_sum);            
    }
      
    return min_sum;
}
int32_t main()
{
	FIO;
	

	return 0;
}
