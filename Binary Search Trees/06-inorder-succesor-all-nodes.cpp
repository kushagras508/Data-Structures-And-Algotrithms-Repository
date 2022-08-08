
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


struct node
{
	int data;
	struct node *left;
	struct node *right;
	struct node *next;
	
	node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	    next = NULL;
	}
};


void inordersuchelper(node* &root, node* &temp){
	if(root==NULL){
		return;
	}
	inordersuchelper(root->right,temp);
	root->next=temp;
	temp=root;
	inordersuchelper(root->left,temp);
}
void populateNext(struct node* p)
{

// Your code goes here
	node *temp=NULL;
	inordersuchelper(p,temp);

}

int32_t main()
{
	FIO;
	

	return 0;
}
