
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<string>res;
void func(int n, string ans, int open , int close){
	if(ans.size()==2*n){
		res.push_back(ans);
		return ;
	}
	if(open<n){
		ans+="(";
		func(n,ans,open+1,close);
		ans.pop_back();
	}
	if(close<open){
		ans+=")";
		func(n,ans,open,close+1);
		ans.pop_back();
	}
}

vector<string>generateParanthesis(int n){
	string ans="";
	func(n,ans,0,0);
	return res;
}

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	vector<string>ans=generateParanthesis(n);
	for(auto x:ans){
		cout<<x<<" ";
	}

	return 0;
}
