
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<int> reverseLevelOrder(Node *root)
{
    // code here
    vector<int>ans;
    if(root==NULL){
    	return ans;
    }
    queue<Node*>q;
    q.push(root);
    while(q.size()>0){
    	int curr_size=q.size();
    	vector<int>v(0);
    	while(curr_size--){
    		Node*frnt=q.front();
    		q.pop();
    		v.push_back(frnt->data);
    		if(frnt->left){
    			q.push(frnt->left);
    		}
    		if(frnt->right){
    			q.push(frnt->right);
    		}
    	}
    	ans.insert(ans.begin(),v.begin(),v.end());
    }
    return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
