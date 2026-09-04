class Solution {
public:
    inline static int suf[100];
    int firstStableIndex(vector<int>& nums, int k) {
        // int n = nums.size();
        // int res = 0;
        // for(int i = 0 ; i<n ; i++){
        //     for(int j = i ; j<=n-1 ; j++){
        //         res = (max(nums[0] , nums[i])) - (min(nums[i] , nums[n-1]));
        //     }
        // }
        // if(res <= k) return res;
        // return -1;
        int n = nums.size();
        suf[n-1] = nums.back();

        for(int i = n-2 ; i>=0 ; i--){
            suf[i] = min(suf[i+1] , nums[i]);
        }
        int maxi = 0;
        for(int i =0 ; i<n ; i++){
            maxi = max(maxi , nums[i]);
            if(maxi - suf[i] <= k) return i;
        }
        return -1;
    }
};