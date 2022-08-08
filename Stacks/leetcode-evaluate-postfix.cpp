
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

string helper(string first, string second, string opr){
	int a=stoi(first);
	int b=stoi(second);
	int ans;
	if(opr=="+"){
		ans=a+b;
	}
	else if(opr=="-"){
		ans=a-b;
	}
	else if(opr=="*"){
		ans=a*b;
	}
	else if(opr=="/"){
		ans=a/b;
	}
	return to_string(ans);

}
    int evalRPN(vector<string>& tokens) {
        stack<string>s;
        for(int i=0;i<tokens.size();i++){
        	if(tokens[i]=="+" || tokens[i]=="-" || tokens[i]=="*" || tokens[i]=="/"){
        		string second=s.top();
        		s.pop();
        		string first=s.top();
        		s.pop();
        		string curr_ans=helper(first,second,tokens[i]);
        		s.push(curr_ans);
        	}
        	else{
        		s.push(tokens[i]);
        	}
        }
        return stoi(s.top());
    }

int32_t main()
{
	FIO;
	

	return 0;
}
