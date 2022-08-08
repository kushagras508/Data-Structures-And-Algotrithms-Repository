
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int32_t main()
{
	FIO;
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		vector<int>arr(n);
		arr.clear();
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		int k;
		cin>>k;
		queue<int>q;
		for(int i=0;i<k;i++){
			if(arr[i]<0){
				q.push(arr[i]);
			}
		}
		for(int i=k;i<n;i++){
			if(q.size()>0){
				cout<<q.front()<<" ";
			}else{
				cout<<"0"<<" ";
			}
			if(arr[i-k]<0){
				q.pop();
			}
			if(arr[i]<0){
				q.push(arr[i]);
			}
		}
		if(q.size()>0){
			cout<<q.front()<<" ";
		}else{
			cout<<"0"<<" ";
		}
		cout<<endl;
	}

	return 0;
}
