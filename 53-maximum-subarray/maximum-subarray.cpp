class Solution {
public:
    int maxSubArray(vector<int>& nums) { //Kadane's algorithm  O(n) , O(1)
        int maxi = INT_MIN;
        for(int i=0 ; i< nums.size() ; i++){
            int sum = max(nums[i]+sum , nums[i]);
            maxi = max(maxi , sum);
        }
        return maxi;
    }
};
