
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<vector<int>>res;

void func(vector<int>& candidates, int target, vector<int>&ans, int pos){
	if(target<0){
		return;
	}
	if(target==0){
		res.push_back(ans);
		return;
	}
	for(int i=pos;i<candidates.size();i++){
		ans.push_back(candidates[i]);
		func(candidates,target-candidates[i],ans,i);
		ans.pop_back();
	}
}
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

	vector<int>ans;
	func(candidates,target,ans,0);
	return res;
        
}
int32_t main()
{
	FIO;
	int n,target;
	cin>>n;
	vector<int>candidates(n);
	candidates.clear();
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		candidates.push_back(a);
	}
	cin>>target;
	vector<vector<int>>ans=combinationSum(candidates,target);
	for(int i=0;i<ans.size();i++){
		for(int j=0;j<ans.size();j++){
			cout<<ans[i][j]<<" ";
		}
		cout<<endl;
	}

	return 0;
}
