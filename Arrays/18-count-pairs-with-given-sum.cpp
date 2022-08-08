
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int getPairsCount(int arr[], int n, int k) {
        // code here
	int cnt=0;
	unordered_map<int,int>m;
	for(int i=0;i<n;i++){
		if(m.find(k-arr[i])!=m.end()){
			cnt+=m[k-arr[i]];
		}
		m[arr[i]]++;
	}
	return cnt;
}

int32_t main()
{
	FIO;
	

	return 0;
}
