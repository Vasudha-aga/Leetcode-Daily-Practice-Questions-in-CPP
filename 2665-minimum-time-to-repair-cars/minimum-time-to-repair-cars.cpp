class Solution {
public:
    long long repairCars(vector<int>& ranks, int cars) {
        priority_queue<
            tuple<long long , int , int>,
            vector<tuple<long long , int , int>>,
            greater<tuple<long long , int , int>>> pq;

            for(int r : ranks){
                pq.push({1LL*r , r , 1});
            }
            long long ans = 0;
            for(int i =0 ; i<cars ; i++){
                auto[time , rank , count] = pq.top();
                pq.pop();

                ans = time;
                count++;
                long long nextTime = 1LL * rank * count * count;
                pq.push({nextTime , rank , count});
            }
            return ans;
    }
};