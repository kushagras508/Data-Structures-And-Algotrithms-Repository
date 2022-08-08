
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void ispalin(char s[], int n){
    int start=0, end=n-1;
    while(start<end){
        if(s[start++]!=s[end--]){
            cout<<"No";
            return;
            
        }
    }
    cout<<"Yes";
}
int32_t main()
{
	FIO;
	

	return 0;
}
