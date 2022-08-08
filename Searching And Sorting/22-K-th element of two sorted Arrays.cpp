
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int kthElement(int arr1[], int arr2[], int n, int m, int k){
        
    priority_queue<int, vector<int>,greater<int> > pq;

    for (int i = 0; i < n; i++) {
        pq.push(arr1[i]);
    }
   
    for (int i = 0; i < m; i++) {
        pq.push(arr2[i]);
    }
    while (k-- > 1) {
        pq.pop();
    }
    return pq.top();
}

int32_t main()
{
	FIO;
	

	return 0;
}
