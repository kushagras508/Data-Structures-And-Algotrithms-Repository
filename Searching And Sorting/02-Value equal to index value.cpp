
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

	vector<int> valueEqualToIndex(int arr[], int n) {
	    // code here
	    vector<int> v;
        for (int i = 0; i < n; i++){
            if (arr[i] == i+1){
                v.push_back(arr[i]);
            }
        }
        return v;
	}

int32_t main()
{
	FIO;
	

	return 0;
}
