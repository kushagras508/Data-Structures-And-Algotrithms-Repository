
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<string>res;

void func(vector<string>& dict, string s, string ans){
	if(s.size()==0){
		res.push_back(ans);
		return;
	}
	for(int i=0;i<s.length();i++){
		string curr=s.substr(0,i+1);
		if(find(dict.begin(),dict.end(),curr)!=dict.end()){
			string rest=s.substr(i+1);
			func(dict,rest,ans+curr+" ");
		}
	}
}
vector<string> wordBreak(int n, vector<string>& dict, string s)
{
     string ans="";
     func(dict,s,"");
     for(auto &x:res){
     	x.resize(x.size()-1);
     }
     return res;
}
int32_t main()
{
	FIO;
	

	return 0;
}
