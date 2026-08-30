class Solution {
public:
    void rotate(vector<vector<int>>& matrix) { //O(n2) , O(1)
        int n = matrix.size();
        for(int i =0 ; i<n ; i++){
            for(int j = i+1 ; j<n ; j++){
                swap(matrix[i][j] , matrix[j][i]);
            }
        }
        for(int i=0 ; i<n ; i++){
            reverse(matrix[i].begin() , matrix[i].end()); //reversing the order of el in each row
        }

        //incase anticlockwise
        // int n = matrix.size();
        // for(int i=0 ; i<n ; i++){
        //     for(int j = i+1 ; j<n ; j++){
        //         swap(matrix[i][j] , matrix[j][i]);
        //     }
        // }
        // for(int i =0 ; i<n ; i++){
        //     reverse(matrix.begin() , matrix.end()); <== changing the order of rows
        // }
    }
};