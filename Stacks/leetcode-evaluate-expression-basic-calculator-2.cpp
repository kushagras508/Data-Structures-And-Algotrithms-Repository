
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
	
    int getPriority(char &c) {
        if(c == '+' || c == '-')
            return 0;
        else
            return 1;
    }
    
    int perform_op(char &c, int &a, int &b) {
        if(c == '+')
            return a + b;
        else if(c == '-')
            return a - b;
        else if(c == '*')
            return a * b;
        else
            return a / b;
    }
    
    int calculate(string s) {
        stack<int> nums;
        stack<char> ops;
        
        for(int i = 0; i < s.size(); ) {
            // skip spaces
            while(i < s.size() && s[i] == ' ') 
                ++i;
            
            // a digit found, traverse till the end of potential end of number
            if(i < s.size() && isdigit(s[i])) {
                int number = 0;
                while(i < s.size() && isdigit(s[i])) {
                    number = number * 10 + (s[i] - '0');
                    ++i;
                }
                nums.emplace(number);
            }
            // if the current char is an operator
            else if(i < s.size() ) {
                // A lower priority op can't be put
                // before finishing a higher priority op
                // S: *, + ====> * should be performed first
                // S: +, * ====> Allowed
                while(!ops.empty() && getPriority(s[i]) <= getPriority(ops.top())) {
                    // perform the operation and put the sub expression result
                    int second = nums.top(); nums.pop();
                    int first = nums.top(); nums.pop();
                    nums.emplace(perform_op(ops.top(), first, second));
                    ops.pop();
                }
                ops.emplace(s[i]);
                ++i;
            }
        }
        
        // evaluate the expression with the remaining operators
        while(!ops.empty()) {
            // perform the operation and put the sub expression result
            int second = nums.top(); nums.pop();
            int first = nums.top(); nums.pop();
            nums.emplace(perform_op(ops.top(), first, second));
            ops.pop();
        }
        
        return nums.top();
    }

int32_t main()
{
	FIO;
	

	return 0;
}
