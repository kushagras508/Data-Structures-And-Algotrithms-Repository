
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int maxSubStr(string str, int n)
{
    int count0 = 0, count1 = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '0') {
            count0++;
        }
        else {
            count1++;
        }
        if (count0 == count1) {
            cnt++;
        }
    }
    if (count0 != count1) {
        return -1;
    }
  
    return cnt;
}
int32_t main()
{
	FIO;
	

	return 0;
}
