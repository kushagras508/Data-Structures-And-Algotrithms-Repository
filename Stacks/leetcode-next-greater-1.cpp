
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>right;
        stack<int>s;
        unordered_map<int,int>m;
        for(int i=nums2.size()-1;i>=0;i--){
            if(s.size()==0){
                m[nums2[i]]=-1;
            }
            else if(s.size()>0 && nums2[i]>=nums2[s.top()]){
                while(s.size()>0 && nums2[i]>=nums2[s.top()]){
                    s.pop();
                }
                if(s.size()==0){
                    m[nums2[i]]=-1;
                }else{
                    m[nums2[i]]=nums2[s.top()];
                }
            }
            else{
                m[nums2[i]]=nums2[s.top()];
            }
            s.push(i);
        }
        for(int i=0;i<nums1.size();i++){
            right.push_back(m[nums1[i]]);
        }
        return right;
    }
int32_t main()
{
	FIO;
	int n,m;
	vector<int>arr1(n);
	vector<int>arr2(m);
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int a;
		cin>>a;
		arr1.push_back(a);
	}
	for (int i = 0; i < n; ++i)
	{
		/* code */
		int a;cin>>a;
		arr2.push_back(a);
	}
	vector<int>ans=nextGreaterElement(arr1,arr2);
	for(auto x:ans){
		cout<<x<<" ";
	}
	return 0;
}
