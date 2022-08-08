
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
vector<vector<int> >res;
vector<vector<int> > stockBuySell(vector<int> A, int n){
        // code here
	int profit=0;
	for(int i=1;i<n;i++){
		if(A[i]>A[i-1]){
			vector<int>ans;
			ans.push_back(i-1);
			ans.push_back(i);
			res.push_back(ans);
			profit+=(A[i]-A[i-1]);
		}
	}
	return res;

}

int32_t main()
{
	FIO;
	

	return 0;
}
