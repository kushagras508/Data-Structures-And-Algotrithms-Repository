
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

 bool isInterleave(string A, string B, string C) {
    //Your code here
    string s1=A, s2=B, s3=C;
	if(s3.length() != s1.length() + s2.length())
    return false;

	bool dp[s1.length()+1][s2.length()+1];

	for(int i=0; i<s1.length()+1; i++)
    	for(int j=0; j< s2.length()+1; j++){
        	if(i==0 && j==0)
            	dp[i][j] = true;
        	else if(i == 0)
            	dp[i][j] = ( dp[i][j-1] && s2[j-1] == s3[i+j-1]);
        	else if(j == 0)
            	dp[i][j] = ( dp[i-1][j] && s1[i-1] == s3[i+j-1]);
        	else
            	dp[i][j] = (dp[i-1][j] && s1[i-1] == s3[i+j-1] ) || (dp[i][j-1] && s2[j-1] == s3[i+j-1] );
    	}
    
	return dp[s1.length()][s2.length()];

}

int32_t main()
{
	FIO;
	

	return 0;
}
