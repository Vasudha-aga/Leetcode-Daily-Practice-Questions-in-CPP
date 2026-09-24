class Solution {
public:
    bool checkIfPangram(string sentence) {
        unordered_set<char> letters;
        for(char a : sentence){
            letters.insert(a);
        }
        if(letters.size() ==26) return true;
        return false;
    }
};