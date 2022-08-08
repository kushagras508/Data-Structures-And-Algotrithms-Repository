
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

 int cnt = 0;
	stack<int> st; //stores idx
    int longestValidParentheses(string s) {
       
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == '(')
			st.push(i);
		else {
			if (st.size()>0 && s[st.top()] == '(') {
				st.pop();
				cnt = max(cnt, st.empty() ? i + 1 : i - st.top());
			}
			else
				st.push(i);
		}
	}
	return cnt;
    }

int32_t main()
{
	FIO;
	string s;
	cin>>s;
	cout<<longestValidParentheses(s)<<endl;

	return 0;
}
