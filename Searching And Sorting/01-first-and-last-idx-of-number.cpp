
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<int> find(int arr[], int n , int x)
{
	int first = -1, last = -1;
	int start = 0, mid, end = n - 1;

// finding the first index
	while(start <= end){
		mid = start+(end - start) / 2;
		if(arr[mid] == x){
			first = mid;
			end = mid - 1;
		}
		else if(arr[mid] < x)
			start = mid + 1;
		else
			end = mid - 1;
	}

// finding the second index
	start = 0, end = n - 1;
	while(start <= end){
		mid = start+(end - start) / 2;
		if(arr[mid] == x){
			last = mid;
			start = mid + 1;
		}
		else if(arr[mid] < x)
			start = mid + 1;
		else
			end = mid - 1;
	}
	vector<int>ans;
	ans.push_back(first);
	ans.push_back(last);
	return ans;
}

int32_t main()
{
	FIO;

	return 0;
}
