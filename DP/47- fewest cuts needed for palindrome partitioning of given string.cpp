
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int t[500][500];
int isPallindrome(string s,int i,int j){
    while(i<=j){
        if(s[i]!=s[j])
            return 0;
        i++;
        j--;
    }
    return 1;
}
int PP(string str,int i,int j){
    if(t[i][j]!=-1)
        return t[i][j];
    if(i>=j || isPallindrome(str,i,j)){
        t[i][j]=0;
        return 0;
    }
    int ans = INT_MAX,temp;
    //Loop from i to j-1 because if string is of length n then # of partitons could be n-1 only.
    for(int k=i;k<j;k++){
        //The thing is we don't need to call it for left portion of string
        //i.e PP for i to k because when the recursion backtrack it consider from i to k
        //We don't need to make call for it explicitly.
        //Just check weather left side is making pallindrome or not.
        if(isPallindrome(str,i,k)){
            temp = 1+PP(str,k+1,j);
            ans = min(ans,temp);
        }
    }
    return t[i][j] = ans;
}
int palindromicPartition(string str){
    memset(t,-1,sizeof(t));
    return PP(str,0,str.length()-1);
}

int32_t main()
{
	FIO;
	

	return 0;
}
