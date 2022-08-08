
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int sb(int arr[], int n, int x){
    int j=0,i=0;
    long long sum=0;
    int min_len=n;
        while(j<n){ 
            sum+=arr[j];
            if(sum<x)
                j++;
            else if(sum>=x){
                while(sum - arr[i] > x){
                    sum-=arr[i++];
                }
                min_len = min(min_len,(j-i+1));
                j++;
            }
        }
        return min_len;
    }
int32_t main()
{
	FIO;
	

	return 0;
}
