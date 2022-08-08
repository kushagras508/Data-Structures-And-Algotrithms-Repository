
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

stack<char>st;

	bool isValid(string s) {
        for (int i = 0; i < s.length(); ++i)
        {
        	if(s[i]=='(' || s[i]=='{' || s[i]=='['){
        		st.push(s[i]);
        	}
        	else if(s[i]==')' || s[i]=='}' || s[i]==']'){
        		if(st.size()>0){
        			if((s[i]==')' && st.top()=='(')||(s[i]=='}' && st.top()=='{')||(s[i]==']' && st.top()=='[')){
        				st.pop();
        			}else{
        				return false;
        			}
        		}
        		else{
        			return false;
        		}
        	}
        }
        if(st.size()==0){
        	return true;
        }else{
        	return false;
        }
	}


int32_t main()
{
	FIO;
	

	return 0;
}
