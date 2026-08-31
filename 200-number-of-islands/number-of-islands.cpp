class Solution {
public:
//whenever we encounter '1' we have discovered an island then DFS visits the entire conected '1' (island) and convert it to '0' so that we don't count it again
    int numIslands(vector<vector<char>>& grid) {
        int m = grid.size() , n = m?grid[0].size():0, islands =0;
        for(int i =0 ; i<m ; i++){
            for(int j = 0 ; j<n ; j++){
                if(grid[i][j] == '1'){
                    islands++;
                    eraseIslands(grid , i , j);
                }
            }
        }
        return islands;
    }
private:
    void eraseIslands(vector<vector<char>> &grid , int i , int j){ //find every piece of land connected to a cell and change it to water
        int m = grid.size() , n = grid[0].size();
        if(i<0 || i==m || j<0 || j==n || grid[i][j] == '0') return;
        grid[i][j] = '0';
        eraseIslands(grid , i-1 , j);
        eraseIslands(grid , i+1 , j);
        eraseIslands(grid , i , j-1);
        eraseIslands(grid , i , j+1);
    }
};