class Solution {
public:
    int minElement(vector<int>& nums) {
        for(auto & i : nums)
        {
            int total = 0;
            while(i > 0)
            {
                total += i % 10;
                i = i / 10;
            }
            i = total;
        }
        return *min_element(nums.begin(), nums.end());
    }
};