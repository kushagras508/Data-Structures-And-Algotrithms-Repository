
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


Node *helper(Node *head1, Node*head2){
    Node *curr1=head1;
    Node *curr2=head2;
    while(curr1 && curr2 && curr1!=curr2){
        curr1=curr1->next;
        curr2=curr2->next;
        
        if(curr1==NULL){
            curr1=head2;
        }
        if(curr2==NULL){
            curr2=head1;
        }
        if(curr1==curr2){
            return curr1;
        }
    }
    return curr1;
}
int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    Node *ans=helper(head1,head2);
    return ans->data;
}


ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
	
	if(headA==NULL || headB==NULL){
		return NULL;
	}
	ListNode* curr1=headA;
	ListNode* curr2=headB;

	while(curr1 && curr2){
		if(curr1==curr2){
			return curr1;
		}
		curr1=curr1->next;
		curr2=curr2->next;

		if(curr1==curr2){
			return curr1;
		}

		if(curr1==NULL){
			curr1=headB;
		}
		if(curr2==NULL){
			curr2=headA;
		}
	}
	return curr1;        
}
int32_t main()
{
	FIO;
	

	return 0;
}
