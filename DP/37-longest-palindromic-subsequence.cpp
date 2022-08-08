
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int lps(string X,string Y,int n,int m)
{
    int t[n+1][m+1];
    for(int i=0;i<n+1;i++)
    {
        for(int j=0;j<m+1;j++)
        {
            if(i==0||j==0)
            {
                t[i][j]=0;
            }
            else if(X[i-1]==Y[j-1])
            {
                t[i][j]=1+t[i-1][j-1];
            }
            else
            {
                t[i][j]=max(t[i][j-1],t[i-1][j]);
            }
        }
        
    }
    return t[n][m];
}
int longestPalinSubseq (string S)
{
    // your code here
    string T=S;
    reverse(S.begin(),S.end());
    int l=S.length();
    int ans=lps(S,T,l,l);
    return ans;
    
}

int32_t main()
{
	FIO;
	

	return 0;
}
