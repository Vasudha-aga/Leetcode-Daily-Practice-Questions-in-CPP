class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int Max = 0;
        int Min = INT_MAX;
        for(int i=0 ; i<prices.size() ; i++)
        {
            Min = min(Min , prices[i]);
            Max = max(Max , prices[i] - Min);
        }
        return Max;
    }
};