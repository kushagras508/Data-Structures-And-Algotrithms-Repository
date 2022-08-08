
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

    int calculate(string s) {
        int res = 0;
        int num = 0; 
        int sign = 1;
        stack<int> st;
        for(int i = 0; i < s.size(); i++){
            char ch = s[i];
            if(ch >= '0' && ch <= '9'){
                num = 10 * num + (ch - '0');//for case "23"
            }
            else if(ch == '+'){
                res += sign * num;// everytime meets an operator sums up previous number
                num = 0;
                sign = 1;//sign of next number
            }
            else if(ch == '-'){
                res += sign * num;// everytime meets an operator sums up previous number
                num = 0;
                sign = -1;
            }
            else if(ch == '('){
                st.push(res);/// ...(1+3+(..xx..)+...)... before go into cur (..xx..), record the forefront result (in this case it is 1+3 )   
                st.push(sign);// record cur (..xx..) sign
                res = 0; // result is to record the total value in the cur (..xx..)
                num = 0;
                sign = 1;
            }
            else if(ch == ')'){
                res += sign * num;// for case: 1-(5)
                res *= st.top(); 
                st.pop();
                res += st.top(); 
                st.pop();
                num = 0;
            }
        }
        if(num > 0) 
        	res += sign * num;
        return res;
    }

int32_t main()
{
	FIO;
	

	return 0;
}
