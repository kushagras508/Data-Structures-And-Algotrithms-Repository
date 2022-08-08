
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
bool find3Numbers(int arr[], int N, int X)
{
    //Your Code Here
    sort(arr,arr+N);
    bool ans=false;
    for(int i=0;i<N-1;i++){
        int start=i+1;
        int end=N-1;
        int x=arr[i];
        while(start<end){
            if(arr[start] + arr[end] + x == X){
            start++;
            end--;
            ans=true;
            }
            else if(arr[start] + arr[end] + x < X){
                start++;
            }
            else{
                end--;
            }
        }
        
    }
    if(ans==false){
        return false;
    }
    return true;
}
int32_t main()
{
	FIO;
	

	return 0;
}
