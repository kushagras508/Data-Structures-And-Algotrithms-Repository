
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

Node* insert(Node* root, int Key)
{
    // Your code here
   
    if(root==NULL){
    	root=new Node(Key);
    	return root;
    }
    else if(Key<root->data){
    	root->left=insert(root->left,Key);
    }
    else if(Key>root->data){
    	root->right=insert(root->right,Key);
    }
    return root;
}

int32_t main()
{
	FIO;
	

	return 0;
}
