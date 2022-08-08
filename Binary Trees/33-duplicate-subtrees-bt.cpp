
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
vector<int>res;
string helper(Node* root, unordered_map<string,int>&m){
    if(root==NULL){
        return "";
    }
    string left=helper(root->left,m);
    string right=helper(root->right,m);
    string ans=to_string(root->data)+"$"+left+"$"+right+"$";
    
    if(m[ans]==1){
        res.push_back(root->data);
    }
    m[ans]++;
    return ans;
}
void printAllDups(Node* root)
{
    // Code here
    res.clear();
    if(root==NULL){
        return;
    }
    unordered_map<string,int>m;
    helper(root,m);
    if(res.size()==0){
        cout<<-1;
    }
    else{
        sort(res.begin(),res.end());
        for(auto x:res){
            cout<<x<<" ";
        }
    }
}
int32_t main()
{
	FIO;
	

	return 0;
}
