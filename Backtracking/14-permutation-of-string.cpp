
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<string>res;
void func(string s, int pos, int n){
	if(pos==n-1){
		res.push_back(s);
		return;
	}
	for(int i=pos;i<s.length();i++){
		swap(s[i],s[pos]);
		func(s,pos+1,n);
		swap(s[i],s[pos]);
	}
}

vector<string>permute(string s){
	int n=s.size();
	func(s,0,n);
	sort(res.begin(),res.end());
	return res;
}

int32_t main()
{
	FIO;
	string s;
	cin>>s;
	vector<string>ans=permute(s);
	for(auto x:ans){
		cout<<x<<" ";  
	}

	return 0;
}
