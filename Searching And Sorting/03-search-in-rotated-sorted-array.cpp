
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

int search(vector<int>& nums, int target) {
        int start = 0, end = nums.size()-1;
        while (start <= end) {
            int mid = start+(end-start) / 2;
            if (target == nums[mid])
                return mid;
            // there exists rotation; the middle element is in the left part of the array
            if (nums[mid] > nums[end]) {
                if (target < nums[mid] && target >= nums[start])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
            // there exists rotation; the middle element is in the right part of the array
            else if (nums[mid] < nums[start]) {
                if (target > nums[mid] && target <= nums[end])
                    start = mid + 1;
                else
                    end = mid - 1;
            }
            // there is no rotation; just like normal binary search
            else {
                if (target < nums[mid])
                    end = mid - 1;
                else
                    start = mid + 1;
            }
        }
        return -1;
}

int32_t main()
{
	FIO;
	

	return 0;
}
