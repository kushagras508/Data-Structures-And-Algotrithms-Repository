
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool stackpermute(vector<int>&inputarr, vector<int>&outputarr,int n){
	queue<int>inputq;
	queue<int>outputq;
	for(auto x:inputarr){
		inputq.push(x);
	}
	for(auto x:outputarr){
		outputq.push(x);
	}
	stack<int>s;
	while(inputq.size()>0){
		int frnt=inputq.front();
		inputq.pop();
		if(frnt==outputq.front()){
			outputq.pop();
			while(s.size()>0){
				if(s.top()==outputq.front()){
					s.pop();
					outputq.pop();
				}else{
					break;
				}
			}
		}else{
			s.push(frnt);
		}
	}

	if(s.size()==0 && inputq.size()==0){
		return true;
	}else{
		return false;
	}
}

int32_t main()
{
	FIO;
	int n;
	cin>>n;
	vector<int>inputarr(n);
	inputarr.clear();
	vector<int>outputarr(n);
	outputarr.clear();
	for(int i=0;i<n;i++){
		int a;cin>>a;
		inputarr.push_back(a);
	}
	for(int i=0;i<n;i++){
		int a;cin>>a;
		outputarr.push_back(a);
	}
	cout<<stackpermute(inputarr,outputarr,n)<<endl;

	return 0;
}
