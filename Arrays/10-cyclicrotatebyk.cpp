
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	int arr[n];
	int k;cin>>k;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=n-k;i<n;i++){
		cout<<arr[i]<<" ";
	}
	for(int i=0;i<n-k;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
