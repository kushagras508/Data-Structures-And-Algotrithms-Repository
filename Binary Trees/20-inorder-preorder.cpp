
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    Node *helper(int *pre, int *in, int &rootidx, int left, int right){
        if(left>right){
            return NULL;
        }
        int pivot=left;
        while(in[pivot]!=pre[rootidx]){
            pivot++;
        }
        rootidx++;
        Node *newnode=new Node(in[pivot]);
        newnode->left=helper(pre,in,rootidx,left,pivot-1);
        newnode->right=helper(pre,in, rootidx, pivot+1, right);
        return newnode;
        
    }
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int rootidx=0;
        return helper(pre,in,rootidx,0,n-1);
    }
int32_t main()
{
	FIO;
	

	return 0;
}
