
#include<bits/stdc++.h>
using namespace std;
//#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void getStrings(string s, vector<string> &res, vector<int> &vowel)
{
    int n = s.length();
    for(int i=0; i<n; i++)
    {
        if(vowel[s[i] - 'a'])
        {
            for(int j=i+1; j<n; j++)
            {
                if(!vowel[s[j] - 'a'])
                    res.push_back(s.substr(i, j-i+1));
            }
        }
    }
}

int main() 
{
    string s = "abc";
    vector<int> v(26, 0);
    v['a'-'a'] = v['e'-'a'] = v['i'-'a'] = v['o'-'a'] = v['u'-'a'] = 1;
    
    vector<string> res;
    getStrings(s, res, v);
    
    for(int i=0; i<res.size(); i++)
        cout << res[i] << endl;
    return 0;
}
