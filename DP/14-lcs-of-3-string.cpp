#include<bits/stdc++.h>
using namespace std;
int helper(string s1,string s2,string s3, int n, int m, int o){
    int dp[n+1][m+1][o+1];
    for(int i=0;i<n+1;i++){
        for(int j=0;j<m+1;j++){
            for(int k=0;k<o+1;k++){
            	if(i==0 || j==0 || k==0){
                	dp[i][j][k]=0;
            	}
        	}
    	}
	}
    for(int i=1;i<n+1;i++){
        for(int j=1;j<m+1;j++){
            for(int k=1;k<o+1;k++){
            	if(s1[i-1]==s2[j-1] && s1[i-1]==s3[k-1]){
                	dp[i][j][k]=1+dp[i-1][j-1][k-1];
            	}
            	else{
                	dp[i][j][k]=max({dp[i-1][j][k],dp[i][j-1][k],dp[i][j][k-1]});
            	}
        	}
    	}
	}
    return dp[n][m][o];
}
int main() {
	//code
	int t;
	cin>>t;
	while(t--){
	    int n,m,k;
	    cin>>n>>m>>k;
	    string s1,s2,s3;
	    cin>>s1>>s2>>s3;
	    cout<<helper(s1,s2,s3,n,m,k)<<endl;
	    
	}
	return 0;
}