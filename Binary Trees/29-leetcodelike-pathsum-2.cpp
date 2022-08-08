
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

//backtracking-style

vector<vector<int>>res;

void helper(TreeNode*root, int targetSum, vector<int>&ans){
	if(root==NULL){
		return;
	}
	ans.push_back(root->val);
	if(root->data==targetSum && root->left==NULL && root->right==NULL){
		res.push_back(ans);
	}

	helper(root->left,targetSum-root->data,ans);
	helper(root->right,targetSum-root->data,ans);
	ans.pop_back();
}

vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<int>ans;
        helper(root,targetSum,ans);
        return res;
}

int32_t main()
{
	FIO;
	

	return 0;
}
