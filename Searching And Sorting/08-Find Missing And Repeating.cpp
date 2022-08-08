
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

//m-1
int *findTwoElement(int *arr, int n) {
        
        map<int,int>mp;
        for(int i=0;i<n;i++)
            mp[arr[i]]++;
        int *ans=new int(2);    
        for(auto it=mp.begin();it!=mp.end();it++)
        {
            if(it->second>1)
            {
                ans[0]=it->first;
                break;
            }
        }
        for(int i=1;i<=n;i++)
        {
            if(mp.find(i)==mp.end())
            {    ans[1]=i; 
            	break; 
            }
        }
        return ans;
    }
//m-2

 void helper(int arr[], int n){
 	int sum=n*(n+1)/2, arrsum=0, sqsum=n*(n+1)*(2*n+1)/6, sqarrsum=0;
	    for(int i=0;i<n;i++){
	        arrsum+=arr[i];
	        sqarrsum+=arr[i]*arr[i];
	    }
	     int minus=sum-arrsum;
	     int plus=(sqsum-sqarrsum)/minus;
	     int res1=(plus-minus)/2;//repeat
	     int res2=(plus+minus)/2;//missing
	    cout<<res1<<" "<<res2<<endl;
 }


int32_t main()
{
	FIO;
	

	return 0;
}
