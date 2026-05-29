class Solution {
public:
    int minElement(vector<int>& nums) {
        for(auto & each : nums)
        {
            int total = 0;
            while(each > 0)
            {
                total += each % 10;
                each = each / 10;
            }
            each = total;
        }
        return *min_element(nums.begin(), nums.end());
    }
};