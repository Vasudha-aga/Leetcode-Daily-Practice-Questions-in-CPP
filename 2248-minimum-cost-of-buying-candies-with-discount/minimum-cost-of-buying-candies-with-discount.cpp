class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin() , cost.end() , greater<int>()); //sort in descending order
        int totalCost = 0;
        int take=0;
        for(int i = 0 ; i<cost.size() ; i++)
        {
            if(take == 2)
            {
                take = 0; //this step skips the third element from adding in the totalCost hence considering it free
            }
            else
            {
                totalCost += cost[i];
                take += 1;
            }
        }
        return totalCost;
    }
};

