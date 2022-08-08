
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helpersum(Node *root){
	if(root==NULL){
		return 0;
	}
	int lsum=helpersum(root->left);
	int rsum=helpersum(root->right);
	return (root->data)+lsum+rsum;
}

void toSumTree(Node *node){
        // Your code here
	if(node==NULL){
		return;
	}
	int leftsum=helpersum(node->left);
	int rightsum=helpersum(node->right);
	node->data=leftsum+rightsum;
	toSumTree(node->left);
	toSumTree(node->right);
}

int32_t main()
{
	FIO;
	

	return 0;
}
