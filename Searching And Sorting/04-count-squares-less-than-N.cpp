
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int countSquares(int N) {
        // code here
        int cnt=0;
        for(int i=1;i<sqrt(N);i++){
            if(i*i<N){
                cnt++;
            }
        }
        return cnt;
}

int32_t main()
{
	FIO;
	

	return 0;
}
