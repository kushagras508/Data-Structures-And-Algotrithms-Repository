
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int numDistinct(string s, string t) {
	
	long long n = s.size(), m = t.size();
        if(m>n)return 0; //if size of string 't' is greater then it can't be a subsequrnce of samller string 's'
     //create a dp table of (m+1)x(n+1) & initialize all values to zero  
        vector<vector<long long>> dp(m+1,vector<long long>(n+1, 0));
//set first column values to zero beacuse if the s string is empty then we can't find any subsequence
        for(int i=0;i<=m;i++)
            dp[i][0]=0; 
//set first row values to zero because if target string 't'is empty then there is only one distinct subsequence i.e empty subsequence
        for(int j=0;j<=n;j++)
            dp[0][j]=1;
    
        for(int i=1;i<=m;i++)
            for(int j=1;j<=n;j++){
//if the characters don't match of both the string then we check by removing the last character of s        
             if(t[i-1] != s[j-1])
                    dp[i][j] = dp[i][j-1];
// if the characters match then two case arise we include the last character of 's' or don't
                else 
                    dp[i][j] =  dp[i-1][j-1]+ dp[i][j-1];
            }
// retun answer stored for size m,n
        return dp[m][n];
}

int32_t main()
{
	FIO;
	

	return 0;
}
