class Solution {
public:
    string reverseParentheses(string s) {
        stack<int> openP;
        string res;
        for(char curr : s){
            if(curr == '('){
                openP.push(res.length());
            }else if(curr == ')'){
                int start = openP.top();
                openP.pop();
                reverse(res.begin() + start , res.end());
            }else{
                res += curr;
            }
        }
        return res;
    }
};