class Solution {
public:
    int maxSubArray(vector<int>& nums) { //Kadane's algorithm  O(n) , O(1)
        int maxSum = INT_MIN;
        for(int i =0 ; i<nums.size() ; i++){
            int sum = max(sum + nums[i] , nums[i]);
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};
