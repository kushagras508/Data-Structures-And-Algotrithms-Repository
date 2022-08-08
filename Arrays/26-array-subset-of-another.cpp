
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
        int m, n;
        cin>>m>>n;
        set<int>s;
        int arr1[m], arr2[n];
        for(int i=0;i<m;i++){
            cin>>arr1[i];
            s.insert(arr1[i]);
        }
        for(int i=0;i<n;i++){
            cin>>arr2[i];
        }
        bool ans=true;
        for(int i=0;i<n;i++){
            if(s.find(arr2[i])==s.end()){
                ans=false;
                break;
            }
        }
        if(ans==true){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }

    }

	return 0;
}
