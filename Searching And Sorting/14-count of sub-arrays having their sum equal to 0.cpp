
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int helper(int arr[], int n){
   unordered_map<int,int>m;
   int sum=0;
   int cnt=0;
   for(int i=0;i<n;i++){
       sum+=arr[i];
       if(sum==0){
           cnt++;
       }
       if(m.find(sum)!=m.end()){
           cnt+=m[sum];
       }
       m[sum]++;
   }
   return cnt;
}

int32_t main()
{
	FIO;
	

	return 0;
}
