class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int res =0, i=0 , maxf = 0;
        for(int j =0 ; j<s.size() ; j++){
            mp[s[j]]++;
            maxf = max(maxf , mp[s[j]]);

            while((j-i+1) - maxf >k){
                mp[s[i]]--;
                i++;
            }
            res = max(res , j-i+1);
        }
        return res;
    }
};