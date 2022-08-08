
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
void threeWayPartition(int arr[], int n, int a, int b)
{
    int s = 0;
    int e = n-1;
    int i = 0;
    while(i<=e){
        if(arr[i] < a){
            swap(&arr[i++],&arr[s++]);
        }
        else if(arr[i] >= a && arr[i] <= b){
            i++;
        }
        else{
            swap(&arr[e--],&arr[i]);
        }
    }
}
int32_t main()
{
	FIO;
	

	return 0;
}
