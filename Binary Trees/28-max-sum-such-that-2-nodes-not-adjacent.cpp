
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// first of the pair indicates maximum sum when the data of a node is included and the second indicates maximum sum when the data of a particular node is not included
pair<int,int>helper(Node *root){
	if(root==NULL){
		return ({0,0});
	}
	pair<int,int>lsum=helper(root->left);
	pair<int,int>rsum=helper(root->right);
	pair<int,int>ans;
	ans.first=root->data+lsum.second+rsum.second;
	ans.second=max(lsum.first,lsum.second)+max(rsum.first,rsum.second);

	return ans;
}


int maxsum(Node *root){
	pair<int,int>ans=helper(root);
	return max(ans.first,ans.second);
}

int32_t main()
{
	FIO;
	

	return 0;
}
