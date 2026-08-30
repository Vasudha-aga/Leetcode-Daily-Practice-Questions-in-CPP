class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) { //O(NxK) , O(NxK), N=no. of strings
                                                                                  //K = max length of a string 
        unordered_map<string , vector<string>> mp;
        for(string s : strs){
            vector<int> count(26,0);
            for(char c : s){
                count[c-'a']++;
            }
            string key = "";
            for(int num : count){
                key += to_string(num) + "#";
            }
            mp[key].push_back(s);
        }
        vector<vector<string>> result;
        for(auto &pair : mp){
            result.push_back(pair.second);
        }
        return result;
    }
};