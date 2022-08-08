
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int32_t main(){
	FIO;
    int t;
    cin>>t;
    while(t--){
        int n, k, c=0;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++) cin>>a[i];
        sort(a, a+n);
        map<string, int> m;
        string str="";
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-2;j++){
                int l=j+1, r=n-1;
                while(l<r){
                    if(a[i]+a[j]+a[l]+a[r]==k){
                        c++;
                        str = to_string(a[i])+to_string(a[j])+to_string(a[l])+to_string(a[r]);
	                        if(m[str]==0){
	                            cout<<a[i]<<" "<<a[j]<<" "<<a[l]<<" "<<a[r]<<" "<<"$";
	                            m[str]++;
	                            
	                        }
                        l++;
                        r--;
                    }
                    else if(a[i]+a[j]+a[l]+a[r]>k) r--;
                    else l++;
                }
            }
        }
        if(c==0) cout<<"-1";
        cout<<endl;
    }
    return 0;
}

