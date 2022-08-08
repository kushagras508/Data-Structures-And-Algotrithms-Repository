
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        vector<int>left(n);
        
        stack<int>leftst;
        for(int i=0;i<n;i++){
            if(leftst.empty() || heights[i]>heights[leftst.top()]){
                left[i]=i;
                leftst.push(i);
            }else{
                while(!leftst.empty() && heights[i]<=heights[leftst.top()]){
                    leftst.pop();
                }
                if(leftst.empty()){
                    left[i]=0;
                }else{
                    left[i]=leftst.top()+1;
                }
                leftst.push(i);
            }
        }
        vector<int>right(n);
        stack<int>rightst;
        for(int i=n-1;i>=0;i--){
            if(rightst.empty() || heights[i]>heights[rightst.top()]){
                rightst.push(i);
                right[i]=i;
            }else{
                while(!rightst.empty() && heights[i]<=heights[rightst.top()]){
                    rightst.pop();
                }
                if(rightst.empty()){
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
    int maximalRectangle(vector<vector<char>>& matrix) {
         if(matrix.size() == 0){
            return 0; 
         } 
        
        vector<int> res(matrix[0].size(),0);
        int ans=0;
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++) {
                if(matrix[i][j]=='0'){
                  res[j]=0;  
                } 
                else{
                   res[j]+=(matrix[i][j]-'0'); 
                } 
            }
            ans=max(ans,largestRectangleArea(res));
        }
        
        return ans;        
    
    }
int32_t main()
{
	FIO;
	

	return 0;
}
