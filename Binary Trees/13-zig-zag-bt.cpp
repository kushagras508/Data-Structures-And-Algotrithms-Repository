
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector <int> zigZagTraversal(Node* root)
{
	// Code here
	vector<int>ans;
	//ans.clear();
	if(root==NULL){
		return ans;
	}
	queue<Node*>q;
	q.push(root);
	int level=0;
	while(q.size()>0){
		int curr_size=q.size();
		vector<int>v;
		for(int i=0;i<curr_size;i++){
			auto frnt=q.front();
			q.pop();
			v.push_back(frnt->data);

			if(frnt->left){
				q.push(frnt->left);
			}
			if(frnt->right){
				q.push(frnt->right);
			}
		}
		if(level%2==0){
		    for(int i=0;i<v.size();i++){
		        ans.push_back(v[i]);
		    }
		}else{
		    for(int i=v.size()-1;i>=0;i--){
		        ans.push_back(v[i]);
		    }
		}
		level++;
	}
	return ans;

}

int32_t main()
{
	FIO;
	

	return 0;
}
