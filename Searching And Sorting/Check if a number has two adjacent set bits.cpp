
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

string isAdjacentSetBits(long long int n) {
        // code here
        bool ans= (n & (n >> 1));
        if(ans==true){
            return "Yes";
        }else{
            return "No";
        }
}

int32_t main()
{
	FIO;
	

	return 0;
}
