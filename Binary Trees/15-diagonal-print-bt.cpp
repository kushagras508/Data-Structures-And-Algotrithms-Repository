
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
vector<int>ans;
 
void helper(TreeNode*A, int diagonal, unordered_map<int,vector<int>>&m){
    if(A==NULL){
        return;
    }
    m[diagonal].push_back(A->val);
    helper(A->left,diagonal+1,m);
    helper(A->right,diagonal,m);
} 
vector<int> Solution::solve(TreeNode* A) {
    if(A==NULL){
        return {};
    }
    unordered_map<int,vector<int>>m;
    helper(A,0,m);
    ans.clear();
    for(int i=0;i<m.size();i++){
        for(auto x:m[i]){
            ans.push_back(x);
        }
    }
    return ans;
    
}
int32_t main()
{
	FIO;
	

	return 0;
}
