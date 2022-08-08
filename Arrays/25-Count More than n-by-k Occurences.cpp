
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int countOccurence(int arr[], int n, int k) {
    // Your code here
    map<int,int>m;
    for(int i=0;i<n;i++){
        m[arr[i]]++;
    }
    int cnt=0;
    int req=n/k;
    for(auto x:m){
        if(x.second>req){
            cnt++;
        }
    }
    return cnt;
}
int32_t main()
{
	FIO;
	

	return 0;
}
