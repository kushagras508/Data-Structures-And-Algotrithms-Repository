
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

      int kadane_helper(int *arr, int n) {
        int max_sum = INT_MIN, cur_sum = 0;
        for(int i = 0; i < n; i++) {
            cur_sum += arr[i];
            max_sum = max(max_sum, cur_sum);
            if(cur_sum < 0)
                cur_sum = 0;
        }
        return max_sum;
    }

    int maximumSumRectangle(int R, int C, vector<vector<int>> &M) {
        // code here
        int max_sum = INT_MIN;
        // traverse the rows
        for(int i = 0; i < R; i++) {
            // create temp array to store row by row sums
            int arr[C] = {0};
            // take sum of rows below this, expansion of the rows of the rectangle
            for(int j = i; j < R; j++) {
                // traverse the entire column and take sum of values
                for(int col = 0; col < C; col++)
                    arr[col] += M[j][col];
                // one row is included
                // find the max sum of this temp vector using kadane's algo
                max_sum = max(max_sum, kadane_helper(arr, C));
            }
        }
        return max_sum;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
