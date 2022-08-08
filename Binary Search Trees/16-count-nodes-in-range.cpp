
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int getCount(Node *root, int l, int h)
{
  // your code goes here  
  int count=0; 
	if(root==NULL){
		return 0;
	}
	if(root->data>=l && root->data<=h){
		count++;
	}
	count+=getCount(root->left,l,h);
	count+=getCount(root->right,l,h);

	return count;
}

int32_t main()
{
	FIO;
	

	return 0;
}
