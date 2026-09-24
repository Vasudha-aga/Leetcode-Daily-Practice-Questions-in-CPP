class Solution {
public:
    string removeKdigits(string nums, int k) {
        stack<char> s;
        s.push(nums[0]);
        int i = 1;
        while(i<nums.size()) {
            while(!s.empty() && nums[i]<s.top() && k) {
                s.pop();
                k--;
            }
            if(nums[i]!='0')
                s.push(nums[i]);
            else if(!s.empty()) {
                s.push(nums[i]);
            }
            i++;
        }
        string ans = "";
        while(!s.empty()) {
            if(k==0)
            ans += s.top();
            else k--;
            s.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans == "" ? "0":ans; 
    }
};