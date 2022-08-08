
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool equalzero(int arr[], int n){

    unordered_set<int>s;
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum==0 || s.find(sum)!=s.end()){
            return true;
        }
        s.insert(sum);
    }
    return false;
}

int32_t main()
{
	FIO;
	

	return 0;
}
