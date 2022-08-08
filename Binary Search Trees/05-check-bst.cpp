
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
 bool helperbst(Node* root, int min, int max){
 	if(root==NULL){
 		return true;
 	}
 	if(root->data<min || root->data>max){
 		return false;
 	}
 	else{
 		 return helperbst(root->left,min,root->data-1)&&helperbst(root->right,root->data+1,max);
 	}
 }

 bool isBST(Node* root) {
        // Your code here
 	
 	return helperbst(root,INT_MIN, INT_MAX);
 }

int32_t main()
{
	FIO;
	

	return 0;
}
