
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
vector<int>ans;

void lefthelper(Node*root, int level, int &lastlevel){
	if(root==NULL){
		return;
	}
	if(lastlevel<level){
		ans.push_back(root->data);
		lastlevel=level;
	}
	lefthelper(root->left,level+1,lastlevel);
	lefthelper(root->right,level+1,lastlevel);
}

vector<int> leftView(Node *root)
{
   // Your code here
   ans.clear();
	int lastlevel=0;
	lefthelper(root,1,lastlevel);
	return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
