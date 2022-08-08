
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

struct petrolPump
{
    int petrol;
    int distance;
};
int tour(petrolPump p[],int n)
    {
       //Your code here
    	int totalpetrol=0, totaldist=0;
    	for(int i=0;i<n;i++){
    		totalpetrol+=p[i].petrol;
    		totaldist+=p[i].distance;
    	}

    	if(totalpetrol<totaldist){
    		return -1;
    	}
    	int pos=0;
    	int rempetrol=-1;
    	for(int i=0;i<n;i++){
    		if(rempetrol<0){
    			rempetrol=p[i].petrol-p[i].distance;
    			pos=i;
    		}
    		else{
    			rempetrol+=p[i].petrol-p[i].distance;
    		}
    	}
    	return pos;

    }    

int32_t main()
{
	FIO;
	

	return 0;
}
