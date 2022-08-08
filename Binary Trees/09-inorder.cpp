
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    vector<int>ans;
    vector<int> inOrder(Node* root)
    {
      // Your code here
      if(root==NULL){
          return ans;
      }
      inOrder(root->left);
      ans.push_back(root->data);
      inOrder(root->right);
      
      return ans;
      
    }
int32_t main()
{
	FIO;
	

	return 0;
}
