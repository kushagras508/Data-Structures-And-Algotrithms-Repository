
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int maxdepth(Node *root){
	if(root==NULL){
		return 0;
	}
	int ld=maxdepth(root->left);
	int rd=maxdepth(root->right);
	return 1+max(ld,rd);
}

int mindepth(Node *root){
	if(root==NULL){
		return INT_MAX;
	}
	if(root->left==NULL && root->right==NULL){
		return 1;
	}

	int ld=mindepth(root->left);
	int rd=mindepth(root->right);

	return 1+min(ld,rd);
}

bool check(Node *root){
        //Your code here
	if(maxdepth(root)==mindepth(root)){
		return true;
	}else{
		return false;
	}

}

int32_t main()
{
	FIO;
	

	return 0;
}
