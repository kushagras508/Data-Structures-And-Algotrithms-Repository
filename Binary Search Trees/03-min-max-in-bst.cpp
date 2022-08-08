
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int maxValue(Node* root){
	while(root->right){
		root=root->right;
	}
	return root->data;
}

int minValue(Node* root)
{
    // Code here
    while(root->left){
    	root=root->left;
    }
    return root->data;
}

int32_t main()
{
	FIO;
	

	return 0;
}
