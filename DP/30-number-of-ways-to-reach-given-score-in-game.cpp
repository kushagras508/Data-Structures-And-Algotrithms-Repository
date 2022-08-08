
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
long long int count(long long int n)
{
	long long int table[n+1],i;
	memset(table, 0, sizeof(table));
	table[0]=1;                 // If 0 sum is required number of ways is 1.
	
	// Your code here
	long long int arr[3];
	arr[0]=3,arr[1]=5,arr[2]=10;

    for(int j=0;j<3;j++){
        for(int i=1;i<=n;i++){
            if(arr[j]>i){
                continue;
            }else{
                table[i]=(table[i]+table[i-arr[j]]);
            }
        }
    }
	
	return table[n];
}
int32_t main()
{
	FIO;
	

	return 0;
}
