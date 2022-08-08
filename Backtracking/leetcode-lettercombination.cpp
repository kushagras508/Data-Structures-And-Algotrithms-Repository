
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

unordered_map<char,string>m;
vector<string>res;
void func(int curr,string ans, string digits){
	if(ans.size()==digits.size()){
		res.push_back(ans);
		return;
	}
	for(int i=curr;i<digits.size();i++){
		char curr_c=digits[i];
		for(int j=0;j<m[curr_c].size();j++){
			char curr_ans=m[curr_c][j];
			//ans.push_back(curr_ans);
			ans+=curr_ans;
			func(i+1,ans,digits);
			ans.pop_back();
		}
	}
}
vector<string> letterCombinations(string digits) {
        
     m['2']="abc";
     m['3']="def";
     m['4']="ghi";
     m['5']="jkl";
     m['6']="mno";
     m['7']="pqrs";
     m['8']="tuv";
     m['9']="wxyz";
     if(digits.size()==0){
     	return res;
     }
     string ans="";
     func(0,ans,digits);
     return res;

}

int32_t main()
{
	FIO;
	string s;
	cin>>s;
	vector<string>ans=letterCombinations(s);
	for(auto x:ans){
		cout<<x<<" ";
	}

	return 0;
}
