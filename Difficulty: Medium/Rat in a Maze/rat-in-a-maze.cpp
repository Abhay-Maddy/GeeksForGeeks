class Solution {
  public:
    bool isValid(int i, int j, vector<vector<int>> visit, vector<vector<int>>& maze, int n){
        if(i < 0 || i >= n || j < 0 || j >= n) return false;
        
        if(visit[i][j]) return false;
        
        if(maze[i][j] == 0) return false;
        
        return true;
    }
    
    void solve(int i, int j,vector<vector<int>>& maze, vector<string>& ans, vector<vector<int>> visit, string dir, int n){
        
        if(i == n - 1 && j == n - 1){
            ans.push_back(dir);
            return;
        }
        
        visit[i][j] = true;
        
        if(isValid(i+1,j,visit,maze,n)){
            solve(i+1,j,maze,ans,visit,dir + "D",n);
        }
        
        if(isValid(i,j-1,visit,maze,n)){
            solve(i,j-1,maze,ans,visit,dir + "L",n);
        }
        
        if(isValid(i,j+1,visit,maze,n)){
            solve(i,j+1,maze,ans,visit,dir + "R",n);
        }
        
        if(isValid(i-1,j,visit,maze,n)){
            solve(i-1,j,maze,ans,visit,dir + "U",n);
        }
        
        visit[i][j] = false;
    }
    vector<string> ratInMaze(vector<vector<int>>& maze) {
        
        vector<string> ans;
        int n = maze.size();
        
        if (n == 0 || maze[0][0] == 0 || maze[n - 1][n - 1] == 0)
            return ans;

        vector<vector<int>> visit(n, vector<int>(n, false));

        string dir = "";
        
        
        solve(0,0,maze,ans,visit,dir,n);
        
        return ans;
        
    }
};