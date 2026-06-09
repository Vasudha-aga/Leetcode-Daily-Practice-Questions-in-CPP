class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        long long x = *max_element(nums.begin() , nums.end());
        long long y = *min_element(nums.begin() , nums.end());
        long long result = (x-y)*k;
        return result;
    }
};