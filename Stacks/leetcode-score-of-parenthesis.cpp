
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

/*
() has score 1
AB has score A + B, where A and B are balanced parentheses strings.
(A) has score 2 * A, where A is a balanced parentheses string.
*/

    int scoreOfParentheses(string S) {
        int ans=0;
        stack<int>s;
        for(int i=0;i<S.length();i++){
            if(S[i]=='('){
                s.push(ans);
                ans=0;
            }else{
                int prev=s.top();
                s.pop();
                ans+=prev+max(1,ans);
            }
        }
        return ans;
    }
int32_t main()
{
	FIO;
	

	return 0;
}
