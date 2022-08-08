
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int minValue(string s, int k){
        // code here
        if(k>=l){
        	return 0;
        }
        map<char,int>m;
        for(int i=0;i<s.length();i++){
        	m[s[i]]++;
        }
        priority_queue<int>pq;
        for(auto x:m){
        	pq.push(x.second);
        }
        while(k--){
        	int curr=pq.top();
        	pq.pop();
        	pq.push(curr-1);
        }
        int ans=0;
        while(pq.size()>0){
        	ans+=(pq.top()*pq.top());
        	pq.pop();
        }
        return result;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
