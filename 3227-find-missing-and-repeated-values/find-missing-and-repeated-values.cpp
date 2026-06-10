class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int> mp;
        int n = grid.size();
        vector<int> ans;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(mp.find(grid[i][j]) != mp.end()) // exists
                {
                ans.push_back(grid[i][j]);
               } 
               mp[grid[i][j]] = 1;
            }
        }
        for(int i=1; i<=n*n; i++){
                if(mp.find(i) == mp.end())//does not exists
                {
                ans.push_back(i);
               }
            }
        
        return ans;
    }
};