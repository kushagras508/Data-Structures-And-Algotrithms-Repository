
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector <int> calculateSpan(vector<int>&price, int n)
    {
       // Your code here
    	vector<int>left(n);
    	left.clear();
    	stack<pair<int,int>>s;
    	for(int i=0;i<n;i++){
    		if(s.size()==0){
    			left.push_back(-1);
    		}
    		else if(s.size()>0 && price[i]>=s.top().first){
    			while(s.size()>0 && price[i]>=s.top().first){
    				s.pop();
    			}
    			if(s.size()==0){
    				left.push_back(-1);
    			}else{
    				left.push_back(s.top().second);
    			}
    		}else{
    			left.push_back(s.top().second);
    		}
    		s.push({price[i],i});
    	}
    	for(int i=0;i<n;i++){
    		left[i]=i-left[i];
    	}
    	return left;
    }
int32_t main()
{
	FIO;
	int n;
	cin>>n;
	vector<int>arr(n);
	arr.clear();
	for(int i=0;i<n;i++){
		int a;cin>>a;
		arr.push_back(a);
	}
	vector<int>ans=calculateSpan(arr,n);
	for(auto x:ans){
		cout<<x<<" ";
	}

	return 0;
}
