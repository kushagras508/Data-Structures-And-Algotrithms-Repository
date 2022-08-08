
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int sum(Node*root){
	if(root==NULL){
		return 0;
	}
	return (root->data)+sum(root->left)+sum(root->right);
}

bool isSumTree(Node* root){
         // Your code here
	if(root==NULL){
		return true;
	}
	if(root->left==NULL && root->right==NULL){
		return true;
	}
	int lsum=sum(root->left);
	int rsum=sum(root->right);
	if(lsum+rsum==root->data && isSumTree(root->left) && isSumTree(root->right)){
		return true;
	}
	return false;
}

int32_t main()
{
	FIO;
	

	return 0;
}
