
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

// put every thing except close bracket into the stack then find duplicacy accordingly
stack<char>st;
bool checkredundant(string &s){
	
	for(int i=0;i<s.size();i++){
		if(s[i]!=')'){
			st.push(s[i]);
		}else{
			char topp=st.top();
			st.pop();
			bool ans=true;
			while(topp!='('){
				if(topp=='+' || topp=='-' || topp=='*' || topp=='/'){
					 ans=false;
				}
				topp=st.top();
				st.pop();
			}
			if(ans==true){
				return true;
			}

		}
	}
	return false;
}

int32_t main()
{
	FIO;
	string s;
	cin>>s;
	cout<<checkredundant(s)<<endl;

	return 0;
}
