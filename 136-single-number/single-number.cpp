class Solution {
public:
    int singleNumber(vector<int>& nums) {
        //=================Approach 1====================
        // int n = nums.size();
        // for(int i=0 ; i<n ; i++)
        // {
        //     int cnt =0;
        //     for(int j=0 ; j<n ; j++)
        //     {
        //         if(nums[i] == nums[j])
        //         {
        //             cnt++;
        //         }
        //     }
        //     if(cnt==1)
        //     {
        //         return nums[i];
        //     }
        // }
        // return -1;

        //=================Approach 2====================
        unordered_map<int , int> count;
        for(int i=0 ; i<nums.size() ; i++)
        {
            count[nums[i]]++;
        }
        for(auto i: count)
        {
            if(i.second == 1)
            {
                return i.first;
            }
        }
        return -1;
    }
};
