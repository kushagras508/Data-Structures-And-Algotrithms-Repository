
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
void insert(stack<int> &s, int x)
{
    stack<int> temp;
    while(!s.empty()&&s.top()>x)
    {
        temp.push(s.top());
        s.pop();
    }
    s.push(x);
    while(!temp.empty())
    {
        s.push(temp.top());
        temp.pop();
    }
}
void SortedStack :: sort()
{
   
   if(!s.empty())
   {
       int x;
       x=s.top();
       s.pop();
       SortedStack::sort();
       insert(s,x);
   }
}
int32_t main()
{
	FIO;
	

	return 0;
}
