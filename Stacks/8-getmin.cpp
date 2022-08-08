
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)
void push(stack<int>& s, int a){
	// Your code goes here
	if(s.size()==0){
	    s.push(a);
	}else{
	    if(a<s.top()){
	        s.push(a);
	    }else{
	        s.push(s.top());
	    }
	}
}

bool isFull(stack<int>& s,int n){
	// Your code goes here
	return (s.size()==n);
}

bool isEmpty(stack<int>& s){
	// Your code goes here
	return (s.empty()==true);
}

int pop(stack<int>& s){
	// Your code goes here
	if(s.size()>0){
	    int ans=s.top();
	    s.pop();
	    return ans;
	}
}

int getMin(stack<int>& s){
	// Your code goes here
	return s.top();
}
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty(s)){
		    pop(s);
		}
		while(!isFull(s,n)){
			cin>>a;
			push(s,a);
		}
		cout<<getMin(s)<<endl;
	}
}
int32_t main()
{
	FIO;
	

	return 0;
}
