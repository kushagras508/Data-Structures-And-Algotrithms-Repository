
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>right;
        right.resize(n);
        right.clear();
        stack<long long>s;
        for(long long i=n-1;i>=0;i--){
            if(s.size()==0){
                right.push_back(-1);
            }else if(s.size()>0 && arr[i]>=arr[s.top()]){
                while(s.size()>0 && arr[i]>=arr[s.top()]){
                    s.pop();
                }
                if(s.size()==0){
                    right.push_back(-1);
                }
                else{
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
	int n;cin>>n;
	vector<int>arr(n);
	arr.clear();
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		arr.push_back(a);
	}
	vector<int>ans=nextLargerElement(arr,n);
	for (int i = 0; i < n; ++i)
	{
		cout<<ans[i]<<" ";
	}

	return 0;
}
