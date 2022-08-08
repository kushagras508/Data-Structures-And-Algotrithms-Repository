
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)



bool search(Node* root, int x)
{
    //Your code here
    if(root==NULL){
        return root;
    }
    if(root->data==x){
        return root;
    }
    if(x<root->data){
        return search(root->left,x);
    }else{
        return search(root->right,x);
    }
}

int32_t main()
{
	FIO;
	

	return 0;
}
