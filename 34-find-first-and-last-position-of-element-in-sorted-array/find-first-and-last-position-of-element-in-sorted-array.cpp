class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result = {-1,-1};
        int left = binarysearch(nums , target, true);
        int right = binarysearch(nums , target , false);
        result[0] = left;
        result[1] = right;
        return result;
    }
private: 
    int binarysearch(vector<int>&nums , int target , bool isSearch){
        int left =0;
        int right = nums.size()-1;
        int idx = -1;

        while(left <= right){
            int mid = left + (right-left)/2;
            if(nums[mid] > target) right = mid-1;
            else if(nums[mid] < target) left = mid+1;
            else{
                idx = mid;
                if(isSearch) right = mid-1;
                else left = mid+1;
            }
        }
        return idx;
    }
};