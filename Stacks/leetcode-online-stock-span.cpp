
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
class StockSpanner {
public:
    stack<pair<int,int>>s;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int ans=1;
        while(s.size()>0 && price>=s.top().first){
            ans+=s.top().second;
            s.pop();
        }
        s.push({price,ans});
        return ans;
    }
};
int32_t main()
{
	FIO;
	

	return 0;
}
