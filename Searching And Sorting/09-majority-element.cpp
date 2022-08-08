
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

//BOYER MOORE VOTING ALGORITHM
bool check(int arr[], int n, int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            count++;
        }
        if(count>n/2){
            return true;
        }
    }
    return false;
}
int majorityElement(int a[], int size)
{
    
    // your code here
    int maxidx=0, count=1;
    for(int i=1;i<size;i++){
        if(a[i]==a[maxidx]){
            count++;
        }
        else{
            count--;
        }
        if(count==0){
            maxidx=i;
            count=1;
        }
    }
    int x=a[maxidx];
    bool ans=check(a,size,x);
    if(ans==true){
        return x;
    }
    else{
        return -1;
    }
    
    
}

int32_t main()
{
	FIO;
	

	return 0;
}
