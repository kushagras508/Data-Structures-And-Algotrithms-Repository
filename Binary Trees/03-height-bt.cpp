
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int height(struct Node* node){
        // code here
        if(node==NULL){
        	return 0;
        }
        int lh=height(node->left);
        int rh=height(node->right);
        return 1+max(lh,rh); 
}

int32_t main()
{
	FIO;
	

	return 0;
}
