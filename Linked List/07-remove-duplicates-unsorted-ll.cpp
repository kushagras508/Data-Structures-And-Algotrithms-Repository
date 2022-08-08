
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    Node * removeDuplicates( Node *head) {
     // your code goes here
	set<int>s;
	Node *curr=head;
	s.insert(curr->data);
	while(curr->next){
		if(s.find(curr->next->data)!=s.end()){
			curr->next=curr->next->next;
		}else{
			curr=curr->next;
			s.insert(curr->data);
		}
	}
	return head;
}

int32_t main()
{
	FIO;
	

	return 0;
}
