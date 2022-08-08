
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
int setbitsfun(int n){
	int cnt=0;
	while(n){
		cnt++;
		n=(n&(n-1));
	}
	return cnt;
}
int32_t main()
{
	FIO;
	int n;
	cin>>n;
	cout<<setbitsfun(n)<<endl;

	return 0;
}
