
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool converttomirror(Node*root){
	if(root==NULL){
		return true;
	}
	converttomirror(root->left);
	converttomirror(root->right);
	swap(root->left,root->right);
}

int32_t main()
{
	FIO;
	

	return 0;
}
