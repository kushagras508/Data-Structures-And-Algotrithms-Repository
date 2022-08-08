#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

const int MAX_CHAR = 26;
string FirstNonRepeating(string str){
	queue<char> q;
	int freq[MAX_CHAR] = { 0 };
	string ans;

	for (int i = 0; str[i]; i++) {
		q.push(str[i]);
		freq[str[i] - 'a']++;


		while (!q.empty()) {// check for the non pepeating character
			if (freq[q.front() - 'a'] > 1)
			{
				q.pop();
			}
			else {
				ans += q.front() ;
				break;
			}
		}

		if (q.empty()){
			ans+= '#' ;
		}
	}
return ans;
}


int32_t main()
{
	FIO;
	string s;
	cin>>s;
	cout<<FirstNonRepeating(s)<<endl;

	return 0;
}
