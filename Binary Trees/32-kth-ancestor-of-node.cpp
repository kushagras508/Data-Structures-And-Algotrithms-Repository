
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

Node* kthAnc(Node* root,int &k,int node,int &ans){
    if(root==NULL)
      return NULL;

    if(root->data==node||(kthAnc(root->left,k,node,ans))||( kthAnc(root->right,k,node,ans))){
        if(k>0){
            k--;
        }
        else if(k==0){
            ans=(root->data);
            return NULL;
        }
        return root;
    }
}

int kthAncestor(Node *root, int k, int node){
    if(root==NULL)
        return -1;
    int ans =-1;
    kthAnc(root,k,node,ans);
    return ans;

}
int32_t main()
{
	FIO;
	

	return 0;
}
