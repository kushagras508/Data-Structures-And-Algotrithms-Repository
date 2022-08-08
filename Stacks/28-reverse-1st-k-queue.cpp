
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

queue<int> modifyQueue(queue<int> q, int k)
{
    //add code here.
    deque<int>dq;
	while(k>0){
		int fr=q.front();
		dq.push_front(fr);
		q.pop();
		k--;
	}
	while(q.size()>0){
		int fr=q.front();
		dq.push_back(fr);
		q.pop();
	}
	while(dq.size()>0){
		q.push(dq.front());
		dq.pop_front();
	}
	return q;
}
int32_t main()
{
	FIO;
	

	return 0;
}
