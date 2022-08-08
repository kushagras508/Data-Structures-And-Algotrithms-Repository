
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void multiply(int arr[], int &n, int x){

    int carry=0;
    for(int i=0;i<n;i++){
        int prod=arr[i]*x+carry;
        arr[i]=prod%10;
        carry=prod/10;
    }
    while(carry>0){
        arr[n]=carry%10;
        carry=carry/10;
        n++;
    }
    //return n;
}

void factorial(int n){

    int arr[100000];
    arr[0]=1;
    int res_size=1;
    for(int i=2;i<=n;i++){
        multiply(arr,res_size,i);
    }
    for(int i=res_size-1;i>=0;i--){
        cout<<arr[i];
    }

}

int32_t main()
{
	FIO;
	

	return 0;
}
