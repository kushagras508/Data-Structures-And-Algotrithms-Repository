
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

//O(1) SPACE
string expand(string s, int l , int r){
    
    int n=s.length();
    while(l>=0 && r<n && s[l]==s[r]){
        l--;
        r++;
    }
    return s.substr(l+1,r-l-1);
    
    
}
    string longestPalindrome(string S){
        // code here 
        int n=S.length();
        string ans=S.substr(0,1);
        for(int i=0;i<n;i++){
        string odd=expand(S,i,i);
        string even=expand(S,i,i+1);
        if(odd.length()>ans.length()){
            ans=odd;
        }
        if(even.length()>ans.length()){
            ans=even;
        }
    }
    return ans;
    }





//o(n^2)-space
string longestPalindrome(string s) {
        int n=s.length();
        bool dp[n][n];
        memset(dp,0,sizeof(dp));
        for(int i=0;i<n;i++){
            dp[i][i]=true;
        }
        string ans="";
        ans+=s[0];
        for(int i=n-1;i>=0;i--){
            for(int j=i+1;j<n;j++){
                if(s[i]==s[j]){
                    if((j-i)==1 || dp[i+1][j-1]==true){
                        dp[i][j]=true;
                        if(j-i+1>ans.length()){
                            ans=s.substr(i,j-i+1);
                        }
                    }
                }
            }
        }
        return ans;
    }
int32_t main()
{
	FIO;
	

	return 0;
}
