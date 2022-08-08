
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int search(int arr[], int n, int x)
{
    int i = 0;
    while (i<n)
    {
        if (arr[i] == x)
            return i;
 
        // Jump the difference between current
        // array element and x
        i = i + abs(arr[i]-x);
    }
    return -1;
}

int32_t main()
{
	FIO;
	

	return 0;
}
