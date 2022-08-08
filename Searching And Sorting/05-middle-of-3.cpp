
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int middle(int A, int B, int C){
        int maxx=max({A,B,C});
        int minn=min({A,B,C});
        return maxx^minn^A^B^C;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
