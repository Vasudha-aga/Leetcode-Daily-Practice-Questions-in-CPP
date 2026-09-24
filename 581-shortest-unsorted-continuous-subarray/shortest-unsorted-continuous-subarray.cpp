class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) { //O(n) , O(1)
        int n = nums.size();
        int left = -1 , right = -1; //left and right are the leftmost and rightmost index where the unsorted array starts and ends respectively that means all the elements to the left of left and right of right will be sorted according to the question
        int maxi = INT_MIN;
        // Find right boundary
        for (int i = 0; i < n; i++) {
            maxi = max(maxi, nums[i]);

            if (nums[i] < maxi) {
                right = i;
            }
        }

        int mini = INT_MAX;
        // Find left boundary
        for (int i = n - 1; i >= 0; i--) {
            mini = min(mini, nums[i]);

            if (nums[i] > mini) {
                left = i;
            }
        }

        if (left == -1)
            return 0;

        return right - left + 1;
    }
};
