
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool ispresent(Node*root, int val){
	if(root==NULL){
		return false;
	}
	if(root->data==val){
		return true;
	}
	return ispresent(root->left,val)||ispresent(root->right,val);
}

int findlevel(Node*root, int node, int level){
	if(root==NULL){
		return INT_MIN;
	}
	if(root->data==node){
		return level;
	}
	int leftsearch=findlevel(root->left,node,level+1);
	if(leftsearch!=INT_MIN){
		return leftsearch;
	}
	return findlevel(root->right,node,level+1);
}

Node* lca(Node* root, int a , int b){
	if(root==NULL || root->data==a || root->data==b){
		return root;
	}
	Node *leftans=lca(root->left,a,b);
	Node *rightans=lca(root->right,a,b);

	if(leftans==NULL){
		return rightans;
	}
	else if(rightans==NULL){
		return leftans;
	}
	else{
		return root;
	}
}
int findDist(Node* root, int a, int b) {
    // Your code here
    Node *currlca=NULL;

    if(ispresent(root,a) && ispresent(root,b)){
    	currlca=lca(root,a,b);
    }else{
    	return INT_MIN;
    }

    return findlevel(currlca,a,0)+findlevel(currlca,b,0);
}

int32_t main()
{
	FIO;
	

	return 0;
}
