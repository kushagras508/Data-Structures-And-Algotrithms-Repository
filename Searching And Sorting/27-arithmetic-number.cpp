
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int inSequence(int A, int B, int C){
        // code here
        if(A==B)
            return 1;
        if(C!=0){
            int res=(B-A)%C;
            if(res==0 && ( ((B-A)<0 && C<0) || ((B-A)>0 && C>0)))
            return 1;
            
        }
        return 0;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
