class Solution {
public:
    int countRotations(string s, int k) {
        int n = s.length();
        string doubled = s+s;
        int ans = 0;
        for(int i = 0 ; i<n ; i++){
            int score = 0;
            for(int j =0 ; j<n-1 ; j++){
                if(doubled[i+j] == doubled[i+j+1]){
                    score++;
                }
            }
            if(score == k) ans++;
        }
        return ans;
    }
};

