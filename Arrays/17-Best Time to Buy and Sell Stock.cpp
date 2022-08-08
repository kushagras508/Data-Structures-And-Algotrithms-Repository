
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int maxProfit(vector<int>& prices) {
        int n=prices.size();
        int currprice=INT_MAX, maxprofit=0;
        for(int i=0;i<n;i++){
            if(prices[i]<currprice){
                currprice=prices[i];
            }
            else if(prices[i]-currprice>maxprofit){
                maxprofit=prices[i]-currprice;
            }
        }
        return maxprofit;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
