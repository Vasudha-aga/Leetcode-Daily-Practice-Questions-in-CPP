class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int n = gain.size();
        int maxi = 0;
        for(int i =0 ; i<=n ; i++)
        {
            int temp =0;
            for(int j = 0 ; j<i ; j++)
            {
                temp+=gain[j];
            }
            maxi = max(maxi,temp);
        }
        return maxi;
    }
};