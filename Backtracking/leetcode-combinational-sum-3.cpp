
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<vector<int>>res;

void func(int k, int n, vector<int>&ans, int pos){
	if(n==0 && ans.size()==k){
		res.push_back(ans);
		return;
	}
	for(int i=pos;i<=9;i++){
		if((n-i)<0){
			break;
		}
		ans.push_back(i);
		func(k,n-i,ans,i+1);
		ans.pop_back();
	}
}

vector<vector<int>> combinationSum3(int k, int n) {
 vector<int>ans;
 func(k,n,ans,1);
 return res;       
}

int32_t main()
{
	FIO;
	

	return 0;
}
