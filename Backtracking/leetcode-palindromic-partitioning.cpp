
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

 vector<vector<string>>res;

bool possible(string s, int start, int end){
	while(start<end){
		if(s[start++]!=s[end--]){
			return false;
		}
	}
	return true;
}
void func(string s, vector<string>&ans, int pos){
	if(pos==s.size()){
		res.push_back(ans);
	}
	for(int i=pos;i<s.size();i++){
		if(possible(s,pos,i)){
			ans.push_back(s.substr(pos,i-pos+1));
			func(s,ans,i+1);
			ans.pop_back();
		}
	}
}
 vector<vector<string>> partition(string s) {
        vector<string>ans;
        func(s,ans,0);
        return res;
 }
int32_t main()
{
	FIO;
	

	return 0;
}
