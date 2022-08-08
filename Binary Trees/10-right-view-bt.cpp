
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<int>ans;

void righthelper(Node*root, int level, int &lastlevel){
	if(root==NULL){
		return;
	}
	if(lastlevel<level){
		ans.push_back(root->data);
		lastlevel=level;
	}
	righthelper(root->right,level+1,lastlevel);
	righthelper(root->left,level+1,lastlevel);
}
vector<int> rightView(Node *root)
{
       // Your Code here
	ans.clear();
	int lastlevel=0;
	righthelper(root,1,lastlevel);
	return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
