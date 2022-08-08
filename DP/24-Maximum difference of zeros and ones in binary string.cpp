
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int kadane(int arr[], int n){
    int curr_sum=0;
    int max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        curr_sum+=arr[i];
        if(curr_sum>max_sum){
            max_sum=curr_sum;
        }

        if(curr_sum<0){
            curr_sum=0;
        }
    }
    return max_sum;
}
	int maxSubstring(string S)
	{
	    // Your code goes here
	    int n=S.length();
        int arr[n];
        for(int i=0;i<n;i++){
            if(S[i]=='0'){
                arr[i]=1;
            }
            if(S[i]=='1'){
                arr[i]=-1;
            }
        }
        return kadane(arr,n);
    
	}

int32_t main()
{
	FIO;
	

	return 0;
}
