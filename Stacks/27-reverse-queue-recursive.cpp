
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void recreverse(queue<int>&q){
	if(q.size()==0){
		return;
	}
	int frnt=q.front();
	q.pop();
	recreverse(q);
	q.push(frnt);
}

int32_t main()
{
	FIO;
	queue<int>q;
	q.push(4);
	q.push(3);
	q.push(1);
	q.push(10);
	q.push(2);
	q.push(6);
	recreverse(q);
	while(q.size()>0){
		cout<<q.front()<<" ";
		q.pop();
	}

	return 0;
}
