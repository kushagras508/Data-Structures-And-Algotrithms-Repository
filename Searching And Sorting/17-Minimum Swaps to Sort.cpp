
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

/*
1. using selection sort - TC:O(n^2)
2. using graph method- TC : O(nlogn)
*/

//m-2
int minSwaps(vector<int>&nums){
	    // Code here
	pair<int, int> arrPos[nums.size()]; 
	for (int i = 0; i < nums.size(); i++) { 
		arrPos[i].first = nums[i]; 
		arrPos[i].second = i; 
	} 
	int n=nums.size();
	sort(arrPos, arrPos + n); // sort by first
	
	vector<bool> vis(n, false); 

	int ans = 0; 
	for (int i = 0; i < n; i++) 
	{ 
		if (vis[i] || arrPos[i].second == i) 
			continue; 
 
		int cycle_size = 0; 
		int j = i; 
		while (!vis[j]) 
		{ 
			vis[j] = 1; 
			j = arrPos[j].second; 
			cycle_size++; 
		} 
      
		if (cycle_size > 0) 
		{ 
			ans += (cycle_size - 1); 
		} 
	} 
	return ans; 
}

int32_t main()
{
	FIO;
	

	return 0;
}
