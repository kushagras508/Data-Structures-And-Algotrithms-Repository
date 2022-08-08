
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int longest(int arr[], int n){
    int ans=0;
    unordered_set<int>s;
    for(int i=0;i<n;i++){
        s.insert(arr[i]);
    }
    for(int i=0;i<n;i++){
        if(s.find(arr[i]-1)==s.end()){
            int j=arr[i];
            while(s.find(j)!=s.end()){
                j++;
            }
            ans=max(ans,j-arr[i]);
        }
    }
    return ans;
}
int32_t main()
{
	FIO;
	

	return 0;
}
