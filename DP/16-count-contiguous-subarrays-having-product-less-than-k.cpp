
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    int countSubArrayProductLessThanK(const vector<int>& a, int n, long long k) {
        long pro=1;
        int res=0;
        for(int i=0,j=0;j<a.size();j++){
            pro*=a[j];
            while(i<=j && pro>=k){
                pro/=a[i];
                i++;
            }
            res+=(j-i+1);
        }
        return res;
    }
int32_t main()
{
	FIO;
	

	return 0;
}
