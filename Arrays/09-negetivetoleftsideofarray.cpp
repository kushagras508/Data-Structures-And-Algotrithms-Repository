
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
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int j=0;
	for(int i=0;i<n;i++){
		if(arr[i]<0){
			if(i!=j){
				swap(arr[i],arr[j]);
			}
			j++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
