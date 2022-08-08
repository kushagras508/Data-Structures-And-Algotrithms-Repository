
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<vector<int>>res;

void func(int n , int k, vector<int>&ans, int pos){
	if(ans.size()==k){
		res.push_back(ans);
		return;
	}
	for(int i=pos; i<=n;i++){
		ans.push_back(i);
		func(n,k,ans,i+1);
		ans.pop_back();
	}
}
vector<vector<int>> combine(int n, int k) {
     vector<int>ans;
     func(n,k,ans,1);
     return res;   
}

int32_t main()
{
	FIO;
	

	return 0;
}
