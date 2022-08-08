
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<int>nextsmaller(vector<int>&arr, int n){
	vector<int>right(n);
	right.clear();
	stack<int>s;
	for(int i=n-1;i>=0;i--){
		if(s.size()==0){
			right.push_back(-1);
		}
		else if(s.size()>0 && arr[i]<=arr[s.top()]){
			while(s.size()>0 && arr[i]<=arr[s.top()]){
				s.pop();
			}
			if(s.size()==0){
				right.push_back(-1);
			}else{
				right.push_back(arr[s.top()]);
			}
		}
		else{
			right.push_back(arr[s.top()]);
		}
		s.push(i);
	}
	reverse(right.begin(),right.end());
	return right;
}

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	vector<int>arr(n);
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		arr.push_back(a);
	}
	vector<int>ans=nextsmaller(arr,n);
	for(int i=0;i<n;i++){
		cout<<ans[i]<<" ";
	}

	return 0;
}
