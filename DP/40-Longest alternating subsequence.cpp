
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helper(int arr[], int n){

    int smaller=1, bigger=1;
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            bigger=smaller+1;
        }
        else if(arr[i]<arr[i-1]){
            smaller=bigger+1;
        }
        else{
            continue;
        }
    }
return max(smaller,bigger);
}

int32_t main()
{
	FIO;
	

	return 0;
}
