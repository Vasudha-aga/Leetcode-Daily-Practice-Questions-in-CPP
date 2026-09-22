class Solution { //O(n) , O(n)
public:
    int rob(vector<int>& nums) {
        if(nums.size() == 1) return nums[0];
        return max(getMax(nums,0,nums.size()-2) , getMax(nums , 1 , nums.size() - 1)); //max(CASE 2 , CASE 1)
    }
private:  
    int getMax(vector<int> &nums , int start , int end){
        int prevRob = 0;
        int maxRob =0;
        for(int i = start ; i<=end ; i++){
            int temp = max(maxRob , prevRob +nums[i]);
            prevRob = maxRob;
            maxRob = temp;
        }
        return maxRob;
    }
};
//APPROACH - to make the problem easy , my strategy is to eliminate either the first house or the second house since according to the proble given the houses are arranged in form of a circle which results house 1 and house n as neighbours and we cannot rob neighbors at the same time
//Therefore CASE 1 - eliminate nth house and calculate
// CASE 2 - eliminate first house and calculate
// CASE 3 - if we only have one house then return the money associated with that one house only since this is the only house we'll be having to rob , PTBN - in this case we cannot eliminate the house otherwise it will return 0 which will be wrong