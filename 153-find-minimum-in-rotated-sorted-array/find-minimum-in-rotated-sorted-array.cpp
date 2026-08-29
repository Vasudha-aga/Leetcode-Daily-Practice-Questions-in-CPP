class Solution {
public:
    int findMin(vector<int>& nums) {
        //O(logn) , O(1)
        int n = nums.size();
        int low = 0;
        int high= n-1;
        int ans = INT_MAX;
        while(low <= high){
            int mid = low + (high-low) /2;
            if(nums[mid] >= nums[low]){ //left side of mid is sorted 
                ans = min(ans , nums[low]);
                low = mid+1;
            }else{
                ans = min(ans , nums[mid]); //right side of mid is sorted so min value should be on the left side
                high = mid-1;
            }
        }
        return ans;
    }
};