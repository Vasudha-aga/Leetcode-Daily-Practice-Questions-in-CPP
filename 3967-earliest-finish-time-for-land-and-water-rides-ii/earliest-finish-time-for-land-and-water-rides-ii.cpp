class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime,
                           vector<int>& landDuration,
                           vector<int>& waterStartTime,
                           vector<int>& waterDuration) {
        int n_land = landStartTime.size();
        int n_water = waterStartTime.size();

        // First - land ride then water ride
        int water_2 = INT_MAX;
        {
            int land_1 = INT_MAX;
            for (int i = 0; i < n_land; i++) {
                land_1 = min(land_1, landStartTime[i] + landDuration[i]);
            }
            for (int i = 0; i < n_water; ++i) {
                water_2 = min(water_2, max(waterStartTime[i], land_1) +
                                           waterDuration[i]);
            }
        }
        // Second - water ride then land ride
        int land_2 = INT_MAX;
        {
            int water_1 = INT_MAX;
            for (int i = 0; i < n_water; i++) {
                water_1 = min(water_1, waterStartTime[i] + waterDuration[i]);
            }
            for (int i = 0; i < n_land; i++) {
                land_2 = min(land_2,
                             max(landStartTime[i], water_1) + landDuration[i]);
            }
        }

        return min(land_2, water_2);
    }
};