
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool isCircular(Node *head)
{
   // Your code here
	Node *curr=head;
	while(curr){
		if(curr->next==head){
			return true;
		}
		curr=curr->next;

	}
	return false;
}

int32_t main()
{
	FIO;
	

	return 0;
}
