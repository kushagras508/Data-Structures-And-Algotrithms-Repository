
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool search(Node *root, int val){
	if(root==NULL){
		return false;
	}
	if(root->data==val){
		return true;
	}
	else if(val<root->data){
		return search(root->left,val);
	}else{
		return search(root->right,val);
	}
}

int countPairs(Node* root1, Node* root2, int x)
{
    // Code here
    if(root1==NULL){
    	return 0;
    }
    else if(search(root2,x-root1->data)){
    	return 1+countPairs(root1->left,root2,x)+countPairs(root1->right,root2,x);
    }
    else{
    	return countPairs(root1->left,root2,x)+countPairs(root1->right,root2,x);
    }
}

int32_t main()
{
	FIO;
	

	return 0;
}
