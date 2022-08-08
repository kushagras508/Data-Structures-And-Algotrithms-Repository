
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)


Node *merge(Node *l1, Node*l2){
	if(l1==NULL){
		return l2;
	}
	if(l2==NULL){
		return l1;
	}
	if(l1->data<l2->data){
		l1->next=merge(l1->next,l2);
		return l1;
	}
	else{
		l2->next=merge(l1,l2->next);
		return l2;
	}
}

Node* mergeSort(Node* head) {
        // your code here
	if(head==NULL || head->next==NULL){
		return head;
	}
	Node *slow= head;
	Node *fast=head->next;
	while(fast && fast->next){
		slow=slow->next;
		fast=fast->next->next;
	}
	Node* mid=slow->next;
	slow->next=NULL;

	return merge(mergeSort(head),mergeSort(mid));

}

int32_t main()
{
	FIO;
	

	return 0;
}
