
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    vector<int> levelOrder(Node* node)
    {
      //Your code here
      vector<int>ans;
      if(node==NULL){
          return ans;
      }
      queue<Node* >q;
      q.push(node);
      while(q.size()>0){
          Node*frnt=q.front();
          q.pop();
          ans.push_back(frnt->data);
          if(frnt->left){
              q.push(frnt->left);
          }
          if(frnt->right){
              q.push(frnt->right);
          }
      }
      return ans;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
