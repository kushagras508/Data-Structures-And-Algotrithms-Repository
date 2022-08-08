
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void rotate(int arr[], int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
    	arr[i]=arr[i-1];
    }
    arr[0]=temp;
}

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++) 
		cin>>arr[i];
	rotate(arr,n);
	for(int i=0;i<n;i++) 
		cout<<arr[i]<<" ";

	return 0;
}
