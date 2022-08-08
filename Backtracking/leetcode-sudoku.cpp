//                         LEETCODE-SOLUTION
/*#include<bits/stdc++.h>
using namespace std;
#define int             long long
#define setbits(x)      __builtin_popcountll(x)
#define mod             1000000007
#define FIO             ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0)

bool possible(int row, int col, vector<vector<char>>&board, char ch){
	for(int i=0;i<9;i++){
		if(board[row][i]==ch){
			return false;
		}
		if(board[i][col]==ch){
			return false;
		}
		if(board[3*(row/3)+i/3][3*(col/3)+i%3]==ch){
			return false;
		}
	}
	return true;
}
bool func(vector<vector<char>>&board){

	for(int i=0;i<board.size();i++){
		for(int j=0;j<board.size();j++){
			if(board[i][j]=='.'){
				for(char choice='1';choice<='9';choice++){
					if(possible(i,j,board,choice)){
						board[i][j]=choice;
						if(func(board)){
							return true;
						}else{
							board[i][j]='.';
						}
					}
				}
				return false;
			}
		}
	}
	return true;
}
void solveSudoku(vector<vector<char>>&board){
	func(board);
}

int32_t main()
{
	FIO;
	

	return 0;
}*/


// 							GFG-SOLUTION
#include <bits/stdc++.h>
using namespace std; 
#define UNASSIGNED 0  
#define N 9  
class Solution {
  public:
  bool possible(int row, int col, int grid[N][N], int choice){
      for(int i=0;i<9;i++){
          if(grid[row][i]==choice){
              return false;
          }
          if(grid[i][col]==choice){
              return false;
          }
          if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==choice){
              return false;
          }
      }
      return true;
  }
    bool func(int grid[N][N]){
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                if(grid[i][j]==0){
                    for(int choice=1;choice<=9;choice++){
                        if(possible(i,j,grid,choice)){
                            grid[i][j]=choice;
                            if(func(grid)){
                                return true;
                            }else{
                                grid[i][j]=0;
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    bool SolveSudoku(int grid[N][N])  
    { 
        // Your code here
        return func(grid);
    }
    
    void printGrid (int grid[N][N]) 
    {
        // Your code here 
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                cout<<grid[i][j]<<" ";
            }
        }
    }
};

// { Driver Code Starts.

int main() {
	int t;
	cin>>t;
	while(t--)
	{
		int grid[N][N];
		
		for(int i=0;i<9;i++)
		    for(int j=0;j<9;j++)
		        cin>>grid[i][j];
		        
		Solution ob;
		
		if (ob.SolveSudoku(grid) == true)  
            ob.printGrid(grid);  
        else
            cout << "No solution exists";  
        
        cout<<endl;
	}
	
	return 0;
}
