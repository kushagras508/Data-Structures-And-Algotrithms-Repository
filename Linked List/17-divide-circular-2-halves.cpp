
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
   Node *slow = head;
   Node *fast = head;
   while(fast->next!=head && fast->next->next!=head)
    {
        slow=slow->next;
        fast=fast->next->next;
    }
    *head1_ref = head;
    *head2_ref = slow->next;
    slow->next = *head1_ref;
    if(fast->next == head)
        fast->next = *head2_ref;
    else
        fast->next->next = *head2_ref;
   
}

int32_t main()
{
	FIO;
	

	return 0;
}
