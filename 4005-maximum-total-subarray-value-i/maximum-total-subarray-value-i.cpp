using ll = long long;
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        ll x = *max_element(nums.begin() , nums.end());
        ll y = *min_element(nums.begin() , nums.end());

        return (ll)(x-y) * k;
    }
};