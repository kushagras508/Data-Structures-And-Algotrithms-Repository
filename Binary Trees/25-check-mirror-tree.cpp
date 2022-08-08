
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int checkMirrorTree(int n, int e, int A[], int B[]) {
        // code here
	stack<int>s;
	queue<int>q;
	for(int i=1;i<=n;i++){
		s.push(A[i]);
		q.push(B[i]);
		while(s.size()>0 && q.size()>0){
			if(s.top()!=q.front()){
				return 0;
			}
			s.pop();
			q.pop();
		}
		if(s.size()>0 && q.size()>0){
			return 0;
		}
	}
	return 1;

 }

int32_t main()
{
	FIO;
	

	return 0;
}
