class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int n=nums.size();
        vector<int>ans;
        for(auto &c:nums){
            if(c<pivot){
                ans.push_back(c);
            }
        }
        for(auto &c:nums){
            if(c==pivot){
                ans.push_back(c);
            }
        }
        for(auto &c:nums){
            if(c>pivot){
                ans.push_back(c);
            }
        }
        return ans;
    }
};