
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

	long long maxProduct(int *arr, int n) {
	    // code here
	    long long min_end_here=1;
	    long long max_end_here=1;
	    long long maxx=1;
	    for(int i=0;i<n;i++){
	        if(arr[i]>0){
	            max_end_here=max<long long int>(max_end_here*arr[i],1);
	            min_end_here=min<long long int>(min_end_here*arr[i],1);
	        }
	        else if(arr[i]==0){
	           min_end_here=1;
	           max_end_here=1; 
	        }
	        else{
	            long long temp=max_end_here;
	            max_end_here=max<long long int>(min_end_here*arr[i],1);
	            min_end_here=temp*arr[i];
	        }
	        maxx=max<long long int>(max_end_here,maxx);
	    }
	    return maxx;
	}
int32_t main()
{
	FIO;
	

	return 0;
}
