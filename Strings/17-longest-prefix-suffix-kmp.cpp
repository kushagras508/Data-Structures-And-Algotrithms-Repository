
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int lps(string s)
	{
	    // Your code goes here
	    int n=s.length();
	    int lpsarr[n];
	    int i=1,j=0;
	    lpsarr[0]=0;
	    while(i<n){
	        if(s[i]==s[j]){
	            lpsarr[i]=j+1;
	            i++;
	            j++;
	        }
	        else{
	            if(j!=0){
	                j=lpsarr[j-1];
	            }else{
	                lpsarr[i]=0;
	                i++;
	            }
	        }
	    }
	    return lpsarr[n-1];
	}

int32_t main()
{
	FIO;
	

	return 0;
}
