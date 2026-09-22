class WordDictionary {
private: 
    vector<string> vec;
public:
    WordDictionary() {}
    
    void addWord(string word) {
        vec.push_back(word);
    }
    
    bool search(string word) {
        int count = 0;
        int n = word.size();
        for(int i =0 ; i<vec.size(); i++){
            if(n==vec[i].size()){
                for(int j =0 ; j<n ; j++){
                    if(vec[i][j] == word[j] || word[j] == '.') count++;
                    else{
                        count =0;
                        break;
                    }
                }
                if(count == n) return true;
            }
        }
        return false;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */