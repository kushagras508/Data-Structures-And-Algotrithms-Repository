
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

 int evaluatePostfix(string S)
    {
        // Your code here
        stack<int>s;
        for(int i=0;i<S.size();i++){
        	if(S[i]=='+' || S[i]=='-' || S[i]=='*' || S[i]=='/'){
        		int b=s.top();
        		s.pop();
        		int a=s.top();
        		s.pop();
        		if(S[i]=='+'){
        			s.push(a+b);
        		}
        		if(S[i]=='-'){
        			s.push(a-b);
        		}
        		if(S[i]=='*'){
        			s.push(a*b);
        		}
        		if(S[i]=='/'){
        			s.push(a/b);
        		}
        	}
        	else{
        		s.push(S[i]-'0');
        	}
        }
        return s.top();
    }
int32_t main()
{
	FIO;
	string s;
	cin>>s;
	cout<<evaluatePostfix(s)<<endl;

	return 0;
}
