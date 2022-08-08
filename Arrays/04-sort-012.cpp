
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void sort012(int a[], int n)
{
 
 	int start=0,mid=0,end=n-1;
 	while(mid<=end){
 		if(a[mid]==0){
 			if(mid!=start){
 				swap(a[mid],a[start]);
 			}
 			start++;
 			mid++;
 		}
 		else if(a[mid]==1){
 			mid++;
 		}
 		else{
 			swap(a[mid],a[end]);
 			end--;
 		}
 	}   
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
	sort012(arr,n);
	for(int i=0;i<n;i++){
		cout<<arr[i]<<" ";
	}

	return 0;
}
