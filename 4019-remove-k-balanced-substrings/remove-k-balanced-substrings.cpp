class Solution {
public:
    string removeSubstring(string s, int k) {
        stack<pair<char , int>> st;
        for(char c : s){
            if(!st.empty() && st.top().first == c) st.top().second++;
            else st.push({c,1});

            if(st.size() >= 2){
                auto top1 = st.top();
                st.pop();
                auto top2 = st.top();
                st.pop();
                if(top1.first == ')' && top1.second == k && 
                   top2.first == '(' && top2.second >= k){
                    top2.second -= k;
                    if(top2.second > 0) st.push(top2);
                }else{
                    st.push(top2);
                    st.push(top1);
                }
            }
        }
        string ans;
        vector<pair<char,int>> v;
        while(!st.empty()){
            v.push_back(st.top());
            st.pop();
        }
        reverse(v.begin() , v.end());
        for(auto i : v){
            int ct = i.second;
            while(ct>0){
                ans += i.first;
                ct--;
            }
        }
        return ans;
    }
};