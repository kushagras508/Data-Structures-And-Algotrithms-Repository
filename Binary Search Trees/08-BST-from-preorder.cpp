
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

TreeNode* helper(vector<int>& preorder, int &parent,int &idx){

	if(idx==preorder.size()|| preorder[idx]>parent){
		return NULL;
	}

	int currval=preorder[idx++];
	TreeNode *temp=new TreeNode(currval);
	temp->left=helper(preorder,currval,idx);
	temp->right=helper(preorder,parent,idx);

	return temp;
}

TreeNode* bstFromPreorder(vector<int>& preorder) {
      int idx=0;
      int parent=INT_MAX;
      return helper(preorder,parent,idx);  
}

int32_t main()
{
	FIO;
	

	return 0;
}
