
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
string preorder(Node *root, unordered_map<string,int>&m){
	string ans="";
	if(root==NULL){
		return ans;
	}
	ans+=to_string(root->data);
	ans+=preorder(root->left,m);
	ans+=preorder(root->right,m);
	m[ans]++;
	return ans;
}

bool dupSub(Node *root)
{
     //your code here
	unordered_map<string,int>m;
	preorder(root,m);
	for(auto x:m){
		if(x.first.length()>=2 && x.second>=2){
			return true;
		}
	}
	return false;
}

int32_t main()
{
	FIO;
	

	return 0;
}
