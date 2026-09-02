class Solution {
public:
    string removeStars(string s) {
        stack<char> st;
        string str = "";
        for(char c:s){
            if(c == '*' && !st.empty()) st.pop();
            else st.push(c);
        }
        while(!st.empty()){
            str += st.top();
            st.pop();
        }
        reverse(str.begin() , str.end());
        return str;
    }
};