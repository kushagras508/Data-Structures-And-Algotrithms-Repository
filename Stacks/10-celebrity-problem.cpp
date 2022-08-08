
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int celebrity(vector<vector<int> >& M, int n) {
        // code here
        stack<int>s;
        for(int i=0;i<n;i++){
        	s.push(i);
        }
        while(s.size()>=2){
        	int first=s.top();
        	s.pop();
        	int second=s.top();
        	s.pop();
        	if(M[first][second]==0){
        		s.push(first);
        	}else{
        		s.push(second);
        	}
        }
        int ans=s.top();
        for(int i=0;i<n;i++){
        	if(i!=ans){
        		if(M[i][ans]==0 || M[ans][i]==1){
        			return -1;
        		}
        	}
        }
        return ans; 
    }

int32_t main()
{
	FIO;
	

	return 0;
}
