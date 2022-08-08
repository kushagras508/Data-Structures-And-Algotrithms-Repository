
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool check(int arr[],int n, int  k, long long mid){
	long long sum=0;
	int count=1;
	for(int i=0;i<n;i++){
	 sum=sum+arr[i];
		if(sum>mid){
			count++;
			sum=arr[i];
		}

		if(count>k)
			return false;
	}
	return true;
}

long long minTime(int arr[],int n,int k){

	long long sum=0;
	int maxx=0;
	for(int i=0;i<n;i++) {
		sum=sum+arr[i];
		maxx=max(maxx,arr[i]);
	}
	 long long end=sum,start=maxx,res=0; 
	 while(start<=end){
		long long mid=start+(end-start)/2;
		if(check(arr,n,k,mid)==true){
			res=mid;
			end=mid-1;
		}
		else
			start=mid+1;
	}
	return res;

}


int32_t main()
{
	FIO;
	

	return 0;
}
