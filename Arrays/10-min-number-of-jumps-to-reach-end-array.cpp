
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int minJumps(int arr[], int n){
        // Your code here
	int curr=0,jump=0, reach=0;
	for(int i=0;i<n-1;i++){
		if(i+arr[i]>reach){
			reach=i+arr[i];
		}
		if(i==reach){
			return -1;
		}
		if(i==curr){
			jump++;
			curr=reach;
		}
	}
	return jump;
}

int32_t main()
{
	FIO;
	

	return 0;
}
