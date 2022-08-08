
#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

vector<vector<string>>res;

bool possible(vector<string>&ans, int row, int col){
	for(int i=row;i>=0;i--){
		if(ans[i][col]=='Q'){
			return false;
		}
	}
	for(int i=row,j=col;i>=0 && j>=0 ;i--,j--){
		if(ans[i][j]=='Q'){
			return false;
		}
	}
	for(int i=row,j=col;i>=0 && j>=0 ;i--,j++){
		if(ans[i][j]=='Q'){
			return false;
		}
	}
	return true;
}

void func(vector<string>&ans, int pos){
	if(pos==ans.size()){
		res.push_back(ans);
		return;
	}
	for(int i=0;i<ans.size();i++){
		if(possible(ans,pos,i)){
			ans[pos][i]='Q';
			func(ans,pos+1);
			ans[pos][i]='.';
		}
	}
}


vector<vector<string>> solveNQueens(int n) {
  
  vector<string>ans(n,string(n,'.'));
  func(ans,0);
  return res;

}

int32_t main()
{
	FIO;
	

	return 0;
}
