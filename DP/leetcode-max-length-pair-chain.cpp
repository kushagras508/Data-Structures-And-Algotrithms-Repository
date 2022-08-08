
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

-------------------gfg---------------
struct val{
	int first;
	int second;
};

/*You are required to complete this method*/
bool comp(const val&a, const val&b){
    return (b.second>a.second);
}
int maxChainLen(struct val p[],int n)
{
//Your code here
sort(p,p+n,comp);
int curr=0;
int total=1;
for(int i=0;i<n-1;i++){
    if(p[i+1].first>p[curr].second){
        total++;
        curr=i+1;
    }
}
return total;
}
----------------leetcode----------------
int findLongestChain(vector<vector<int>>& pairs) {
	
	if(pairs.size()==0){
		return 0;
	}
	sort(pairs.begin(),pairs.end());
	vector<int>dp(pairs.size(),1);
	int ans=1;
	for(int i=0;i<pairs.size();i++){
		for(int j=0;j<i;j++){
			if((pairs[j][1]<pairs[i][0])&&(dp[i]<dp[j]+1)){
				dp[i]=1+dp[j];
				ans=max(ans,dp[i]);
			}
		}
	}        
	return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
