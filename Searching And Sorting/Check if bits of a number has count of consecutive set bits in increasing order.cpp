
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool findContinuous1(int n)
{
    const int bits = 8*sizeof(int);
 
    // store the bit-pattern of n into
    // bit bitset- bp
    string bp = bitset <bits>(n).to_string();
 
    // set prev_count = 0 and curr_count = 0.
    int prev_count = 0, curr_count = 0;
 
    int i = 0;
    while (i < bits)
    {
        if (bp[i] == '1')
        {
            // increment current count of continuous-1
            curr_count++;
            i++;
        }
 
        // traverse all continuous-0
        else if (bp[i-1] == '0')
        {
            i++;
            curr_count = 0;
            continue;
        }
 
        // check  prev_count and curr_count
        // on encounter of first zero after
        // continuous-1s
        else
        {
            if (curr_count < prev_count)
                return 0;
            i++;
            prev_count=curr_count;
            curr_count = 0;
        }
    }
 
    // check for last sequence of continuous-1
    if (prev_count > curr_count && (curr_count != 0))
        return 0;
 
    return 1;
}

int32_t main()
{
	FIO;
	

	return 0;
}
