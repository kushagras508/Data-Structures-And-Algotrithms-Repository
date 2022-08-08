
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

Node* LCA(Node *root, int n1, int n2)
{
   //Your code here
	if(root==NULL || root->data==n1 || root->data==n2){
		return root;
	}
	Node *leftans=LCA(root->left,n1,n2);
	Node *rightans=LCA(root->right,n1,n2);
	if(leftans==NULL){
		return rightans;
	}
	else if(rightans==NULL){
		return leftans;
	}
	else{
		return root;
	}
}

int32_t main()
{
	FIO;
	

	return 0;
}
