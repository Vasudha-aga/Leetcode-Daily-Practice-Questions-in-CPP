class Solution {
public:
    int largestInteger(vector<int>& nums, int k) {
        int ans = -1;
        unordered_map<int , int> mp;
        //frequency count of each element
        for(int n: nums){
            mp[n]++;
        }
        //case 1 - when k==1
        if(k==1){
            for(auto &[x,cnt] : mp){
                if(cnt == 1){
                    ans = max(ans, x);
                }
            }
        }
        //case 2 - when k==n
        else if(k==nums.size()){
            ans = *max_element(nums.begin() , nums.end());
        }
        //case 3 - when 1<k<n
        else{
            for(auto &[x,cnt] : mp){
                if(cnt == 1 && (x==nums[0] || x == nums.back())){
                    ans = max(ans,x);
                }
            }
        }
        return ans;
    }
};