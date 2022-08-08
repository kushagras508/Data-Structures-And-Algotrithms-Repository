
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool wordBreak(string s, vector<string>& wordDict) {
      vector<bool> dp(s.size()+1,false);
        dp[0] = true;
        for(int i=0;i<=s.size();++i){
            for(int j=0;j<i;++j){
                if(dp[j])
                {
                    if(find(wordDict.begin(),wordDict.end(),s.substr(j,i-j))!= wordDict.end()){
                        dp[i] = true;
                        break;
                    }
                }
                
            }
        }
        return dp[s.size()];
}

int32_t main()
{
	FIO;
	

	return 0;
}
