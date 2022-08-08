
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int height(Node *root){
	if(root==NULL){
		return 0;
	}
	int lh=height(root->left);0
	int rh=height(root->right);
	return 1+max(lh,rh);
}

int sumOfLongRootToLeafPath(Node* root)
{
	// Code here
	if(root==NULL){
		return 0;
	}
	if(height(root->left)>height(root->right)){
		return root->data+sumOfLongRootToLeafPath(root->left);
	}
	else if(height(root->left)<height(root->right)){
		return root->data+sumOfLongRootToLeafPath(root->right);
	}
	else{
		int lsum=sumOfLongRootToLeafPath(root->left);
		int rsum=sumOfLongRootToLeafPath(root->right);
		return root->data+max(lsum,rsum);
	}
}

int32_t main()
{
	FIO;
	

	return 0;
}
