
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
   int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n);
        vector<int>right(n);
        stack<int>leftst;
        for(int i=0;i<n;i++){
            if(leftst.size()==0 || heights[i]>heights[leftst.top()]){
                left[i]=i;
                leftst.push(i);
            }else {
                while(leftst.size()>0 && heights[i]<=heights[leftst.top()]){
                    leftst.pop();
                }
                if(leftst.size()==0){
                    left[i]=0;
                }else{
                    left[i]=leftst.top()+1;
                }
                leftst.push(i);
            }

        }
        stack<int>rightst;
        for(int i=n-1;i>=0;i--){
            if(rightst.size()==0 || heights[i]>heights[rightst.top()]){
                rightst.push(i);
                right[i]=i;
            }else{
                while(rightst.size()>0 && heights[i]<=heights[rightst.top()]){
                    rightst.pop();
                }
                if(rightst.size()==0){
                    right[i]=n-1;
                }else{
                    right[i]=rightst.top()-1;
                }
                rightst.push(i);
            }
        }
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans,heights[i]*(right[i]-left[i]+1));
        }
        return ans;
    }
int32_t main()
{
	FIO;
	int n;
	cin>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++){
		int a;
		cin>>a;
		v.push_back(a);
	}
	cout<<largestRectangleArea(v)<<endl;

	return 0;
}
