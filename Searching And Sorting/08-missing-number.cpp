
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int missingNumber(vector<int>& nums) {
        int res=0;
        for(int i=0;i<=nums.size();i++) {res^=i;}
        for(int i=0;i<nums.size();i++)  {res^=nums[i];}
        return res;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
