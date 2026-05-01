class Solution {
public:
    int solve(vector<vector<int>>&grid,int n,int m,int k,int i,int j,int cost,vector<vector<vector<int>>>&dp){
        if(i>=n||j>=m){
            return INT_MIN;
        }
        int value=grid[i][j];
        int cost_val=grid[i][j]==0?0:1;
        int newCost=cost_val+cost;
        if(newCost>k){
            return INT_MIN;
        }
        if(i==n-1&&j==m-1){
            return grid[i][j];
        }
        if(dp[i][j][newCost]!=-1){
            return dp[i][j][newCost];
        }
        int right=solve(grid,n,m,k,i,j+1,newCost,dp);
        int down=solve(grid,n,m,k,i+1,j,newCost,dp);
        int best=value+ max(right,down);
        return dp[i][j][newCost]= best;
        
    }
    int maxPathScore(vector<vector<int>>& grid, int k) {
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<vector<int>>>dp(n,vector<vector<int>>(m,vector<int>(k+1,-1)));

        int ans=solve(grid,n,m,k,0,0,0,dp);
        if(ans<0){
            return -1;
        }
        return ans;
    }
};