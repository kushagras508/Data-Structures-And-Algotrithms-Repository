
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

Node *helper(Node* root, int val){
	if(root==NULL){
		root=new Node(val);
		return root;
	}
	if(val<=root->data){
		root->left=helper(root->left,val);
	}
	else{
		root->right=helper(root->right,val);
	}
	return root;
}

Node* constructTree(int pre[], int size) {
    //code here
    Node *root=new Node(pre[0]);
    for(int i=1;i<size;i++){
    	root=helper(root,pre[i]);
    }
    return root;
}

int32_t main()
{
	FIO;
	

	return 0;
}



