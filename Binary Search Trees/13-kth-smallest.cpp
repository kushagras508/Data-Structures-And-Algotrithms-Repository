
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void inorder(Node* root, int k, int &ans, int &pos){
	if(root==NULL){
		return;
	}
	inorder(root->left,k,ans,pos);
	pos++;
	if(pos==k){
		ans=root->data;
		return;
	}
	inorder(root->right,k,ans,pos);

}

int KthSmallestElement(Node *root, int K){
        //add code here.
	int ans=-1;
	int pos=0;
	inorder(root,K,ans,pos);
	return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
