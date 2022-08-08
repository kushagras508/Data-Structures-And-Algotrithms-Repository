
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

set<int> unionn(int arr1[],int arr2[], int n, int m){
	set<int>s1;
	for(int i=0;i<n;i++){
		s1.insert(arr1[i]);
	}
	for(int i=0;i<m;i++){
		s1.insert(arr2[i]);
	}
	return s1;
}

vector<int> intersection(int arr1[],int arr2[], int n, int m){
	set<int>s2;
	for(int i=0;i<n;i++){
		s2.insert(arr1[i]);
	}
	vector<int>ans;
	for(int i=0;i<m;i++){
		if(s2.find(arr2[i])!=s2.end()){
			ans.push_back(arr2[i]);
		}
	}
	sort(ans.begin(),ans.end());
	return ans;
}

int32_t main()
{
	FIO;
	int n,m;
	cin>>n>>m;
	int arr1[n], arr2[m];
	for(int i=0;i<n;i++) cin>>arr1[i];
	for(int i=0;i<m;i++) cin>>arr2[i];

	set<int>ansunion=unionn(arr1,arr2,n,m);
	cout<<"Union :";
	for(auto x:ansunion) cout<<x<<" ";
	cout<<endl;
	vector<int>ansinter= intersection(arr1,arr2,n,m);
	cout<<"Intersection:";
	for(auto x:ansinter) cout<<x<<" ";
	return 0;
}
