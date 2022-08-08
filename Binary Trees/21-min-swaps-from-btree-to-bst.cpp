
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
void InorderTraversal(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first recur on left child */
    InorderTraversal(node->left); 
  
    /* store the data of node in array */
    arr.push_back(node->data);
  
    /* now recur on right child */
    InorderTraversal(node->right); 
} 
// Function returns the minimum number of swaps 
// required to sort the array 
int minSwaps(struct Node* node) 
{ 
    InorderTraversal(node);
    int n = arr.size();
    // Create an array of pairs where first 
    // element is array element and second element 
    // is position of first element 
    pair<int, int> arrPos[n]; 
    for (int i = 0; i < n; i++) 
    { 
        arrPos[i].first = arr[i]; 
        arrPos[i].second = i; 
    } 
  
    // Sort the array by array element values to 
    // get right position of every element as second 
    // element of pair. 
    sort(arrPos, arrPos + n); 
  
    // To keep track of visited elements. Initialize 
    // all elements as not visited or false. 
    vector<bool> vis(n, false); 
  
    // Initialize result 
    int ans = 0; 
  
    // Traverse array elements 
    for (int i = 0; i < n; i++) 
    { 
        // already swapped and corrected or 
        // already present at correct pos 
        if (vis[i] || arrPos[i].second == i) 
            continue; 
  
        // find out the number of  node in 
        // this cycle and add in ans 
        int cycle_size = 0; 
        int j = i; 
        while (!vis[j]) 
        { 
            vis[j] = true;
            j = arrPos[j].second; 
            cycle_size++; 
        } 
  
        // Update answer by adding current cycle.  
        if (cycle_size > 0) 
        { 
            ans += (cycle_size - 1); 
        } 
    }
    
    return ans; 
} 
int32_t main()
{
	FIO;
	

	return 0;
}
