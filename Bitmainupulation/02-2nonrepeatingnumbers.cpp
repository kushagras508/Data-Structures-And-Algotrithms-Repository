
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<int>helper(vector<int>&arr, int n){
	int res=arr[0];
	for(int i=1;i<n;i++){
		res=res^arr[i];
	}

	int tempans=res & ~(res-1);
	int grup1=0, grup2=0;
	for(int i=0;i<n;i++){
		if((arr[i]&tempans)!=0){
			grup1=grup1^arr[i];
		}else{
			grup2=grup2^arr[i];
		}
	}
	vector<int>ans;
	ans.push_back(grup1);
	ans.push_back(grup2);
	sort(ans.begin(),ans.end());
	return ans;
}

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	vector<int>arr(n);
	arr.clear();
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		arr.push_back(a);
	}
	vector<int>ans=helper(arr,n);
	for(auto x:ans){
		cout<<x<<" ";
	}

	return 0;
}
