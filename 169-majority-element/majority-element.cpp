class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int , int> count;
        int n = nums.size();
        for(int x: nums)
        {
            count[x]++;
            if(count[x] > n/2)
            {
                return x;
            }
        }
        return 0;
    }
};