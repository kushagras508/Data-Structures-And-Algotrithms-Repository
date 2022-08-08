
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int trailing_zeroes(int n){
    int count = 0;
    while(n){
        n /= 5;
        count += n;
    }
    return count;
}

int findNum(int n){
    int start = 1, end = 5 * n, ans;
    while(start <= end){
        int mid = (start + end) / 2;
        if(trailing_zeroes(mid) >= n){
            ans = mid;
            end = mid - 1;
        }
        else{
            start = mid + 1;
        }
    }
    return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
