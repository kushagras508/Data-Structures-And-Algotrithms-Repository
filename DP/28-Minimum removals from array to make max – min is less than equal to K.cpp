
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

#define MAX 100
int dp[MAX][MAX];
 
int countRemovals(int a[], int i, int j, int k)
{
    if (i >= j)
        return 0;
    else if ((a[j] - a[i]) <= k)
        return 0;
    else if (dp[i][j] != -1)
        return dp[i][j];
    else if ((a[j] - a[i]) > k) {
        dp[i][j] = 1 + min(countRemovals(a, i + 1, j, k),
                           countRemovals(a, i, j - 1, k));
    }
    return dp[i][j];
}
 
int removals(int a[], int n, int k)
{
    sort(a, a + n);
    memset(dp, -1, sizeof(dp));
    if (n == 1)
        return 0;
    else
        return countRemovals(a, 0, n - 1, k);
}
int32_t main()
{
	FIO;
	

	return 0;
}
