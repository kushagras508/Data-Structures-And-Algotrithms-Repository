
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int wordBreak(string A, vector<string> &B) {
    //code here
    int n=A.length();
    int dp[n+1]={false};
    dp[0]=true;
    for(int i=1;i<n+1;i++){
        for(auto x:B){
            int curr=x.length();
            if(dp[i-1] && A.substr(i-1,curr)==x){
                dp[i+curr-1]=true;
            }
        }
    }
    return dp[n];
}
int32_t main()
{
	FIO;
	

	return 0;
}
