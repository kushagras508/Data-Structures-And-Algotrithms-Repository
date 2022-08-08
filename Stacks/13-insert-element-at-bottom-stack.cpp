
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

stack<int>s;
void insertbottom(int x){
	if(s.size()==0){
		s.push(x);
	}else{
		int top=s.top();
		s.pop();
		insertbottom(x);
		s.push(top);
	}
}

int32_t main()
{
	FIO;
	s.push(1);
	s.push(2);
	s.push(3);
	insertbottom(5);
	while(s.size()>0){
		cout<<s.top()<<" ";//3215
		s.pop();
	}


	return 0;
}
