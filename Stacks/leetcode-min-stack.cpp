
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
class MinStack {
public:
    /** initialize your data structure here. */
    stack<int>s;
    int min;
    MinStack() {
        min=INT_MAX;
    }
    
    void push(int val) {
        if(val<min){
        	min=val;
        }
        s.push(val);
        s.push(min);
    }
    
    void pop() {
        s.pop();
        s.pop();
        if(s.size()>0){
        	min=s.top();
        }else{
        	min=INT_MAX;
        }
    }
    
    int top() {
        s.pop();
        int ans=s.top();
        s.push(min);
        return ans;
    }
    
    int getMin() {
        return min;
    }
};
int32_t main()
{
	FIO;
	

	return 0;
}
