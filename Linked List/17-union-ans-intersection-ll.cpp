
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

Node* findIntersection(Node* head1, Node* head2)
{
    // Your Code Here
   set<int>s;
    Node* curr1=head1;
    Node *curr2=head2;
    while(curr1){
        s.insert(curr1->data);
        curr1=curr1->next;
    }
    set<int>s1;
    while(curr2){
    	if(s.find(curr2->data)!=s.end()){
    	    s1.insert(curr2->data);
    	}
    	curr2=curr2->next;
    }
    
    Node *dummy=new Node(INT_MIN);
    Node *tail=dummy;
    for(auto x:s1){
        
            tail->next=new Node(x);
    		tail=tail->next;
    }
    
    return dummy->next;
}

Node* findUnion(Node* head1, Node* head2)
{
    // Your Code Here
    set<int>s;
    Node* curr1=head1;
    Node *curr2=head2;
    while(curr1){
        s.insert(curr1->data);
        curr1=curr1->next;
    }
    while(curr2){
        s.insert(curr2->data);
        curr2=curr2->next;
    }
    Node *dummy=new Node(INT_MIN);
    Node *tail=dummy;
    for(auto x:s){
        tail->next=new Node(x);
        tail=tail->next;
    }
    return dummy->next;
}

int32_t main()
{
	FIO;
	

	return 0;
}
