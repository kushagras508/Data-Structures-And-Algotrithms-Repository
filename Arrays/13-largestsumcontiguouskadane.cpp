
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int kadane(int arr[], int n){
	int curr_sum=0, max_sum=INT_MIN;
	for(int i=0;i<n;i++){
		curr_sum+=arr[i];
		if(curr_sum<0){
			curr_sum=0;
		}
		if(curr_sum>max_sum){
			max_sum=curr_sum;
		}
	}
	return max_sum;
}

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cout<<kadane(arr,n)<<endl;

	return 0;
}
