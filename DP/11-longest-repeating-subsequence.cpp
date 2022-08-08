
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int helper(string s, string s1, int n, int m){
    int dp[n+1][m+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            if(i==0 || j==0){
                dp[i][j]=0;
            }
        }
    }
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            if(s[i-1]==s1[j-1] && i!=j){
                dp[i][j]=1+dp[i-1][j-1];
            }else{
                dp[i][j]=max({dp[i-1][j],dp[i][j-1]});
            }
        }
    }
    return dp[n][m];
}


int32_t main()
{
	FIO;
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    string s;
	    cin>>s;
	    string s1(s);
	    int m=n;
	    cout<<helper(s,s1,n,m)<<endl;
	}

	return 0;
}
