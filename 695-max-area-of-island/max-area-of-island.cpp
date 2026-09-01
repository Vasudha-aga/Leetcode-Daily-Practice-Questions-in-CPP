class Solution {
public:
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int m = grid.size() , n = m ? grid[0].size():0 ; 
        vector<vector<bool>> visited(m,vector<bool>(n,false));
        int maxi = 0;
        for(int i = 0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(grid[i][j] == 1 && !visited[i][j]) maxi = max(maxi, dfs(grid,visited,i,j));

            }
        }
        return maxi;
    }
private:
    int dfs(vector<vector<int>> &grid , vector<vector<bool>> &visited, int i , int j){
        int m = grid.size() , n = grid[0].size();
        if(i<0 || i==m || j<0 || j==n || grid[i][j] == 0 || visited[i][j]) return 0;
        visited[i][j] = true;
        return 1 + dfs(grid , visited , i+1 , j)+
                   dfs(grid , visited , i-1 , j)+
                   dfs(grid , visited , i , j+1)+
                   dfs(grid , visited , i , j-1);
    }
    
};