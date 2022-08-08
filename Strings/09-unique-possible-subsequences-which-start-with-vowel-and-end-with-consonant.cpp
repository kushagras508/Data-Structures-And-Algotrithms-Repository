
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

set<string> st;
bool isaVowel(char c) {
   return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
bool isaConsonant(char c) {
   return !isaVowel(c);
}
void findSubSequence(string str) {
   for (int i = 0; i < str.length(); i++) {
      if (isaVowel(str[i])) {
         for (int j = str.length() - 1; j >= i; j--) {
            if (isaConsonant(str[j])) {
               string str_sub = str.substr(i, j + 1);
               st.insert(str_sub);
               for (int k = 1; k < str_sub.length() - 1; k++){
                  string sb = str_sub;
                  sb.erase(sb.begin() + k);
                  findSubSequence(sb);
               }
            }
         }
      }
   }
}

int32_t main()
{
	FIO;
	string s = "abc";
   findSubSequence(s);
   for (auto i : st)
      cout<<i<<" ";
   cout << endl;
   return 0;

	return 0;
}
