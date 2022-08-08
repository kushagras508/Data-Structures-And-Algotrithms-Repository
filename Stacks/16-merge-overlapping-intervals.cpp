
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

struct Interval
{
	int first;
	int second;
};

bool compare(Interval i1, Interval i2){
	return i1.first<i2.first;
}
void mergeinterval(Interval arr[], int n){
	sort(arr,arr+n,compare);
	vector<Interval>ans;
	int start=arr[0].first;
	int end=arr[0].second;
	for(int i=1;i<n;i++){
		if(arr[i].first<=end){
			end=max(end,arr[i].second);
		}
		else{
			ans.push_back({start,end});
			start=arr[i].first;
			end=arr[i].second;
		}
	}
	ans.push_back({start,end});
	for(auto x:ans){
		cout<<x.first<<" "<<x.second<<endl;
	}
}

int32_t main()
{
	FIO;
	Interval arr[] =  { {6,8}, {1,9}, {2,4}, {4,7} };
	mergeinterval(arr,4);
	/*vector<int>ans=
	for(auto x:arr){
		cout<<x.first<<" "<<x.second<<endl;
	}*/

	return 0;
}
