
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool compare(vector<int>&a, vector<int>&b){
	if(a[0]==b[0]){
		return a[1]<b[1];
	}else{
		return a[0]<b[0];
	}
}

bool ispossible(vector<int>&a, vector<int>&b){
	return a[0]<b[0] && a[1]<b[1];
}

int maxEnvelopes(vector<vector<int>>& envelopes) {
	vector<int>dp(envelopes.size());
	int res=0;
	sort(envelopes.begin(),envelopes.end(),compare);
	for(int i=0;i<envelopes.size();i++){
		for(int j=0;j<i;j++){
			if(ispossible(envelopes[j],envelopes[i])){
				dp[i]=max(dp[i],1+dp[j]);
				res=max(res,dp[i]);
			}
		}
	}        
	return res+1;
}

int32_t main()
{
	FIO;
	

	return 0;
}
