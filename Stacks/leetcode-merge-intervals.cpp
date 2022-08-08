
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        	if(intervals.size()==0){
        		return intervals;
        	}
        	vector<vector<int>>ans;
        	sort(intervals.begin(),intervals.end());
        	int start=intervals[0][0];
        	int end=intervals[0][1];
        	for(int i=1;i<intervals.size();i++){
        		if(intervals[i][0]<=end){
        			 // current interval is overlapping extend the current interval 
        			end=max(end,intervals[i][1]);
        		}
        		else{
        			ans.push_back({start,end});// push the previous interval in answer
        			start=intervals[i][0];// new start of intervals
        			end=intervals[i][1];//new end of intervals
        		}
        	}
        	ans.push_back({start,end});//last interval
        	return ans;

    }

int32_t main()
{
	FIO;
	

	return 0;
}
