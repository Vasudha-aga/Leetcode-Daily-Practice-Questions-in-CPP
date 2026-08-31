class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int m = matrix.size();
        int n = matrix[0].size();
        int startrow = 0;
        int endrow = m - 1;
        int startcolumn = 0;
        int endcolumn = n - 1;
        while (startrow <= endrow && startcolumn <= endcolumn) {
            for (int i = startrow; i <= endcolumn; i++) {
                ans.push_back(matrix[startrow][i]);
            }
            for (int i = startrow + 1; i <= endrow; i++) {

                ans.push_back(matrix[i][endcolumn]);
            }
            for (int i = endcolumn - 1; i >= startcolumn; i--) {
                if (startrow == endrow) {
                    break;
                }
                ans.push_back(matrix[endrow][i]);
            }
            for (int i = endrow - 1; i > startrow; i--) {
                if (startcolumn == endcolumn) {
                    break;
                }
                ans.push_back(matrix[i][startcolumn]);
            }
            startrow++;
            endrow--;
            startcolumn++;
            endcolumn--;
        }
        return ans;
    }
};