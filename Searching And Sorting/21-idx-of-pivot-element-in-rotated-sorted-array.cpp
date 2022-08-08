
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int findPivot(int arr[], int start, int end)
{
    // base cases
    if (end < start)
        return -1;
    if (end == start)
        return start;
 
    int mid = (start + end) / 2; /*start + (end - start)/2;*/
    if (mid < end && arr[mid] > arr[mid + 1])
        return mid;
 
    if (mid > start && arr[mid] < arr[mid - 1])
        return (mid - 1);
 
    if (arr[start] >= arr[mid])
        return findPivot(arr, start, mid - 1);
 
    return findPivot(arr, mid + 1, end);
}

int32_t main()
{
	FIO;
	

	return 0;
}
