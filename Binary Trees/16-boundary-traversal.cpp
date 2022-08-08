
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<int>ans;

void leftboundary(Node *root){
	if(root==NULL){
		return;
	}
	if(root->left || root->right){
		ans.push_back(root->data);
	}
	if(root->left){
		leftboundary(root->left);
	}
	else if(root->right){
		leftboundary(root->right);
	}
}

void leafnodes(Node *root){
	if(root==NULL){
		return;
	}
	leafnodes(root->left);
	if(root->left==NULL && root->right==NULL){
		ans.push_back(root->data);
	}
	leafnodes(root->right);
}

void rightboundary(Node *root){
	if(root==NULL){
		return;
	}
	
	if(root->right){
		rightboundary(root->right);
	}
    else if(root->left){
		rightboundary(root->left);
	}
	if(root->left || root->right){
		ans.push_back(root->data);
	}
	

}

vector <int> printBoundary(Node *root)
{
     //Your code here
     
	ans.clear();
	if(root==NULL){
		return ans;
	}
	ans.push_back(root->data);
	if(root->left==NULL && root->right==NULL){
		return ans;
	}
	leftboundary(root->left);
	leafnodes(root);
	rightboundary(root->right);
	return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
