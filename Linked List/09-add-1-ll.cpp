
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


 Node *reverse(Node *head){
 	if(head==NULL || head->next==NULL){
 		return head;
 	}
 	Node *curr=head;
 	Node *prev=NULL;
 	while(curr){
 		Node *nxt= curr->next;
 		curr->next=prev;
 		prev=curr;
 		curr=nxt;
 	}
 	return prev;
 }

 Node* addOne(Node *head){
        // Your Code here
        // return head of list after adding one
 	head=reverse(head);
 	Node *curr=head;
 	Node* prev=head;

 	int sum=curr->data+1;
 	curr->data=sum%10;
 	int carry=sum/10;

 	curr=curr->next;
 	while(curr){
 		sum=curr->data+carry;
 		curr->data=sum%10;
 		carry=sum/10;

 		prev=curr;
 		curr=curr->next;
 	}

 	if(carry){
 		prev->next=new Node(carry);
 	}

 	head=reverse(head);
 	return head;
 }

int32_t main()
{
	FIO;
	

	return 0;
}
