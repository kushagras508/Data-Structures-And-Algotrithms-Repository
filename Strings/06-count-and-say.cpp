
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

string countAndSay(int n) {
    string result = "1";
    string current;
    while(n--){
        current = "";
        for(int i=0;i<result.size();i++){
            int count = 1;
            while(i < result.size()-1 && result[i] == result[i+1]){
                count++;
                i++;
            }
            current +=  to_string(count) + result[i] ;
        }
        result = current;
    }
    return result;
}

int32_t main()
{
	FIO;
	

	return 0;
}
