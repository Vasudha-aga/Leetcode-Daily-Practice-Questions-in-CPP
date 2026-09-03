class Solution {
public:
    void sortColors(vector<int>& nums) {
        //Dutch National Flag Algorithm (DNF)
        int high = nums.size() - 1; //keeps the track on 2
        int low = 0; //keeps the track on 0
        int mid  = 0; //keeps the track on 1
        while(mid<=high){
            if(nums[mid] == 0){
                swap(nums[low] , nums[mid]);
                low++;
                mid++;
            }else if(nums[mid] == 2){
                swap(nums[high] , nums[mid]);
                high--;
            }else{
                mid++;
            }
        }
    }
};
