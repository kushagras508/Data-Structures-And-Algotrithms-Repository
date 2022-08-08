
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
class node 
{ 
    public:
    int data; 
    int liss; 
    node *left, *right; 
};
int LISS(node *root) 
{ 
    if (root == NULL) 
        return 0; 
  
    if (root->liss) 
        return root->liss; 
  
    if (root->left == NULL && root->right == NULL) 
        return (root->liss = 1); 
  
    // Calculate size excluding the current node 
    int liss_excl = LISS(root->left) + LISS(root->right); 
  
    // Calculate size including the current node 
    int liss_incl = 1; 
    if (root->left) 
        liss_incl += LISS(root->left->left) + LISS(root->left->right); 
    if (root->right) 
        liss_incl += LISS(root->right->left) + LISS(root->right->right); 
  
    // Maximum of two sizes is LISS, store it for future uses. 
    root->liss = max(liss_incl, liss_excl); 
  
    return root->liss; 
}

int32_t main()
{
	FIO;
	

	return 0;
}
