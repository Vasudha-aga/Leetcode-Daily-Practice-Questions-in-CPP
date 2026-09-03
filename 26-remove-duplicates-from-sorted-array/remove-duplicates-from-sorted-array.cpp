class Solution {
public:
    int removeDuplicates(vector<int>& nums) { // O(n) ,O(1)
        if (nums.empty())
            return 0;
        int i = 0;
        for (int j = 1; j < nums.size(); j++) {
            if (nums[j] != nums[i]) {
                i++;
                nums[i] = nums[j];
            }
        }
        return i + 1;
    }
};

