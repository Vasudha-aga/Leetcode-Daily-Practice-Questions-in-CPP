class Solution {
public:
int maxRotateFunction(vector<int>& nums) {
    int n = nums.size();
    
    long long sum = 0;
    long long f = 0;

    // 1. Calculate total sum and F(0)
    for (int i = 0; i < n; i++) {
        sum += nums[i];
        f += (long long)nums[i] * i;
    }

    long long result = f;

    // 2. Use relation to compute F(k)
    for (int k = 1; k < n; k++) {
        // F(k) = F(k-1) + sum - n * nums[n-k]
        f = f + sum - (long long)n * nums[n - k];
        result = max(result, f);
    }

    return (int)result;
}
};