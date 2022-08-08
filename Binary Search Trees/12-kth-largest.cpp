
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void inorder(Node *root, int &k, int &ans){
	if(root==NULL){
		return;
	}
	inorder(root->right,k,ans);
	k--;
	if(k==0){
		ans=root->data;
		return;
	}
	inorder(root->left,k,ans);
}

int kthLargest(Node *root, int K){
        //Your code here
	int ans=0;
	inorder(root,K,ans);
	return ans;

}

int32_t main()
{
	FIO;
	

	return 0;
}
