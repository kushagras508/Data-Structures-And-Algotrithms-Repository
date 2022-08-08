
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
// TC--For stable_sort() it is O(n*log^2(n))
bool cmp (int a , int b){

	long int cnt1 =0;
	long int cnt2=0;
	while(a){
		a= a & a-1;
		cnt1++;
	}
	while(b){
		b= b & b-1;
		cnt2++;
	}

	if(cnt1<= cnt2) return false;
	return true;
}
void sortBySetBitCount(int arr[], int n)
{
// Your code goes here

	stable_sort(arr,arr+n,cmp);
}

int32_t main()
{
	FIO;
	

	return 0;
}
