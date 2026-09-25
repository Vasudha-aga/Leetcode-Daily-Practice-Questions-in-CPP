class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        // priority_queue<
        //     tuple<long long , int , int>,
        //     vector<tuple<long long , int , int>>,
        //     greater<tuple<long long , int , int>>> pq;

        //     for(int r : ranks){
        //         pq.push({1LL*r , r , 1});
        //     }
        //     long long ans = 0;
        //     for(int i =0 ; i<cars ; i++){
        //         auto[time , rank , count] = pq.top();
        //         pq.pop();

        //         ans = time;
        //         count++;
        //         long long nextTime = 1LL * rank * count * count;
        //         pq.push({nextTime , rank , count});
        //     }
        //     return ans;
        long long left = 1 , right = (long long)*min_element(ranks.begin() , ranks.end()) * cars * cars;

        auto can_repair_all = [&](long long time){
            long long total_cars_repaired = 0;
            for(int rank : ranks){
                total_cars_repaired += sqrt(time/rank);
                if(total_cars_repaired >= cars) return true;
            }
            return false;
        };
        while(left<right){
            long long mid = (left+right)/2;
            if(can_repair_all(mid)) right = mid;
            else left = mid+1;
        }
        return left;
    }
};