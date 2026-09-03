class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int mini = INT_MAX;
        for(int i : nums) mini = min(mini,i);
        if(mini % 2 != 0) return true;
        for(int i : nums) if(i%2 != 0) return false;
        return true;
    }
};