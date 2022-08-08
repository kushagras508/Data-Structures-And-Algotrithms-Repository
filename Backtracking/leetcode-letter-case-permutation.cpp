
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<string>res;
void func(string &S, string ans, int pos){
	if(ans.size()==S.size()){
		res.push_back(ans);
		return;
	}
	for(int i=pos;i<S.size();i++){
		if(isalpha(S[i])){
			ans.push_back(tolower(S[i]));
			func(S,ans,i+1);
			ans.pop_back();
			ans.push_back(toupper(S[i]));
			func(S,ans,i+1);
			ans.pop_back();
		}
		else{
			ans.push_back(S[i]);
			func(S,ans,i+1);
			ans.pop_back();
		}
	}
}
vector<string> letterCasePermutation(string S) {
    string ans="";
    func(S,ans,0);
    return res;
}

int32_t main()
{
	FIO;
	

	return 0;
}
