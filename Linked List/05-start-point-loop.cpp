
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

 ListNode *startpointcycle(ListNode *head) {
        ListNode* slow=head;
        ListNode* fast=head;
        ListNode* looppos=head;
        
        while(fast && fast->next){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast){
                while(looppos!=slow){
                    looppos=looppos->next;
                    slow=slow->next;
                }
                return looppos;
            }
        }
        return NULL;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
