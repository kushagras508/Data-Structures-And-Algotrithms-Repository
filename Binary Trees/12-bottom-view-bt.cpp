
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<int>ans;

vector <int> bottomView(Node *root)
{
   // Your Code Here
	if(root==NULL){
		return ans;
	}
	map<int,int>m;
	queue<pair<Node*, int>>q;
	q.push({root,0});
	while(q.size()>0){
		int curr_size=q.size();
		while(curr_size--){
			auto frnt=q.front();
			q.pop();
			m[frnt.second]=frnt.first->data;

			if(frnt.first->left){
				q.push({frnt.first->left,frnt.second-1});
			}
			if(frnt.first->right){
				q.push({frnt.first->right,frnt.second+1});
			}
		}
	}
	ans.clear();
	for(auto x:m){
		ans.push_back(x.second);
	}
	return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
