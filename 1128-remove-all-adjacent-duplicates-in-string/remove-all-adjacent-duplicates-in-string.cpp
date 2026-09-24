class Solution {
public:
    string removeDuplicates(string s) {
        stack<char> st;
        string str = "";
        for(char a : s){
            if(!st.empty() && st.top() == a) st.pop();
            else st.push(a);
        }
        while(!st.empty()){
            str += st.top();
            st.pop();
        }
        reverse(str.begin() , str.end());
        return str;
    }
};