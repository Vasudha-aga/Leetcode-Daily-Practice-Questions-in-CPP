class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int , int> mp;
        for(int el : nums)
        {
            mp[el]++;
        }
        priority_queue<pair<int , int>> pq;
        for(auto el : mp)
        {
            pq.push({el.second , el.first});
        }
        vector<int> ans;
        while(k--)
        {
            ans.push_back(pq.top().second);
            pq.pop();
        }
        return ans;
    }
};