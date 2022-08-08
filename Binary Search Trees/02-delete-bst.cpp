
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

Node *deleteNode(Node *root,  int X)
{
    // your code goes here
    if(root==NULL){
        return root;
    }
    else if(X<root->data){
        root->left=deleteNode(root->left,X);
    }
    else if(X>root->data){
        root->right=deleteNode(root->right,X);
    }
    else{
        if(root->left==NULL && root->right==NULL){
            delete(root);
            return NULL;
        }
        if(root->left==NULL || root->right==NULL){
            Node *temp=root->left?root->left:root->right;
            delete(root);
            return temp;
        }
        if(root->left && root->right){
            Node *temp=root->right;
            while(temp->left){
                temp=temp->left;
            }
            root->data=temp->data;
            root->right=deleteNode(root->right,root->data);
        }
    }
    return root;
}

int32_t main()
{
    FIO;
    

    return 0;
}
