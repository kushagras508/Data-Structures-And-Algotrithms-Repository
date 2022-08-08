
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<string>res;
unordered_set<string>st;
int getminreversaltobalance(string str){
	stack<char>s;
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i]=='(')
		{
			s.push(str[i]);
		}
		if (str[i]==')')
		{
			if(s.size()==0){
				s.push(str[i]);
				continue;
			}
			if(s.top()==')'){
				s.push(str[i]);
				continue;
			}
			if (s.top()=='(')
			{
				s.pop();
			}
		}
	}
	return s.size();
}

void func(string s, int min_rev){
	if(min_rev<0){
		return ;
	}
	if(min_rev==0){
		int curr=getminreversaltobalance(s);
		if(curr==0){
			res.push_back(s);
		}
		return;
	}

	for (int i = 0; i < s.size(); ++i)
	{
		if(s[i]!='(' && s[i]!=')'){
			continue;
		}
		string left=s.substr(0,i);
		string right=s.substr(i+1);
		string curr_ans=left+right;
		if(st.find(curr_ans)==st.end()){
			st.insert(curr_ans);
			func(curr_ans,min_rev-1);
		}

	}
}
vector<string> removeInvalidParentheses(string s) {
	int min_rev=getminreversaltobalance(s);
	func(s,min_rev);
	return res;    
}
int32_t main()
{
	FIO;


	return 0;
}
