
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
struct Job 
{ 
    int id;	 // Job Id 
    int dead; // Deadline of job 
    int profit; // Profit if job is over before or on deadline 
};
 static bool cmp(Job a, Job b) {
    return a.profit > b.profit;
}

vector<int> JobScheduling(Job arr[], int n) { 
        // your code here
    int count = 0;
    int profit = 0;
    vector<int> ans;
    sort(arr,arr+n,cmp);

    int slots[n] = {0};

    for(int i=0;i<n;i++){
        for(int j=min(arr[i].dead-1,n-1);j>=0;j--){
            if(!slots[j]){
                slots[j] = 1;
                profit+=arr[i].profit;
                count++;
                break;
            }
        }
    }
    ans.push_back(count);
    ans.push_back(profit);
    return ans;

} 

int32_t main()
{
	FIO;
	

	return 0;
}
