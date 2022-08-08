
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


bool aremirror(Node *root1, Node*root2){
	if(root1==NULL && root2==NULL){
		return true;
	}
	if(root1==NULL || root2==NULL){
		return false
	}

	return (root1->data==root2->data)&& aremirror(root1->left,root2->right)&& aremirror(root1->right, root2->left);
}

int32_t main()
{
	FIO;
	

	return 0;
}
