class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi = INT_MIN;
        int buyAt = INT_MAX;
        for(int i =0 ; i<prices.size() ; i++){
            buyAt = min(buyAt , prices[i]); //we'll buy when the cost is minimum
            maxi = max(maxi , prices[i] - buyAt); //maximum profit = selling cost - mini buying cost
        }
        return maxi;
    }
};