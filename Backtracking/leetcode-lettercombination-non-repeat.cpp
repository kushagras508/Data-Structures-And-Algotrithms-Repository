
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void func(vector<int>&candidates, int target, vector<int>&ans, int pos,vector<vector<int>>&res){
        if(target<0){
            return;
        }
        if(target==0){
            res.push_back(ans);
            return;
        }
        for(int i=pos;i<candidates.size();i++){
            if(i>pos && candidates[i]==candidates[i-1]){
                continue;
            }
            if(target-candidates[i]<0){
                break;
            }
            ans.push_back(candidates[i]);
            func(candidates,target-candidates[i],ans,i+1,res);
            ans.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>>res;
        vector<int>ans;
        sort(candidates.begin(),candidates.end());
        func(candidates,target,ans,0,res);
        return res;
    }

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	vector<int>candidates(n);
	for(int i=0;i<n;i++){
		int a;cin>>a;
		candidates.push_back(a);
	}
	int target;cin>>target;
	vector<vector<int>>result=combinationSum2(candidates,target);
	for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<endl;

	return 0;
}
