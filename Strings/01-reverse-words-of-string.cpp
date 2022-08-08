
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

string reverseWords(string s) {
    string ans;
    int i=s.length()-1;
    int start;
    while (i>=0) {
        //skip all spaces
        while (i>=0 && s[i]==' ') i--;
        
        //find how long the word is
        start=i;
        while (i>=0 && s[i]!=' ') i--;
        
        //if there was no word, we are done
        if (start==i) break;
        //add word to return string
        ans+=s.substr(i+1, start-i)+" ";
    }
    
    //erase final space at end
    ans.erase(ans.length()-1);
    return ans;
}

int32_t main()
{
	FIO;
	

	return 0;
}
