
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
//m-1
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
{
    vector<int>ans;
    int i = 0;
    int j = 0;
    int k = 0;
    map<int, int>m;
    while (i < n1 && j < n2 && k < n3) {
        if (A[i] == B[j] && B[j] == C[k] && m[A[i]] == 0) {
            ans.push_back(A[i]);
            m[A[i]]++;
            i++;
            j++;
            k++;
        }
        else {
            if (min(A[i], min(B[j], C[k])) == A[i])
                i++;
            else if (min(A[i], min(B[j], C[k])) == B[j])
                j++;
            else if (min(A[i], min(B[j], C[k])) == C[k])
                k++;
            }
    }
    return ans;
}

//m-2
vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            //code here.
            set<int>ans;
            vector<int>ans1;
            int i=0, j=0,k=0;
            while(i<n1 && j<n2 && k<n3){
                if(A[i]==B[j] && B[j]==C[k]){
                    ans.insert(A[i]);
                }
                if(A[i]<B[j]){
                    i++;
                }
                else if(B[j]<C[k]){
                    j++;
                }
                else{
                    k++;
                }
            }
            for(auto x:ans){
                ans1.push_back(x);
            }
            return ans1;
        }


int32_t main()
{
	FIO;
	

	return 0;
}
