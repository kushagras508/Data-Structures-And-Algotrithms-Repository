
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void findPreSuc(Node* root, Node*& pre, Node*& suc, int key)
{

// Your code goes here
	if(root==NULL){
		return;
	}
	if(root->data <key){
		pre=root;
		findPreSuc(root->right,pre,suc,key);
	}
	else if(root->data == key){
		findPreSuc(root->left,pre,suc,key);
		findPreSuc(root->right,pre,suc,key);
	}
	else{
		suc=root;
		findPreSuc(root->left,pre,suc,key);
	}

}

int32_t main()
{
	FIO;
	

	return 0;
}
