
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

long long countTriplets(long long arr[], int n, long long sum)
	{
	    // Your code goes here
	    sort(arr,arr+n);
	    int cnt=0;
	    map<string,int>m;
	    for(int i=0;i<n-2;i++){
	        int l=i+1,r=n-1;
	        while(l<r){
	            if(arr[i]+arr[l]+arr[r]<sum){
	                 cnt+=(r-l);
	                 l++;
	            }
	            if(arr[i]+arr[l]+arr[r]>=sum){
	                r--;
	            }
	           
	        }
	    }
	    return cnt;
	}

int32_t main()
{
	FIO;
	

	return 0;
}
