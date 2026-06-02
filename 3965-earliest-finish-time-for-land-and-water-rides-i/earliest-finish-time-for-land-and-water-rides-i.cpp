class Solution {
public:
    int earliestFinishTime(vector<int>& landStartTime, vector<int>& landDuration, vector<int>& waterStartTime, vector<int>& waterDuration) {
        int mini=INT_MAX;
        int n=landStartTime.size();
        int m=waterStartTime.size();

        for(int i=0;i<n;i++){
            int ls=landStartTime[i];
            int ld=landDuration[i];
            for(int j=0;j<m;j++){
                int ws=waterStartTime[j];
                int wd=waterDuration[j];

                int s1=max(ls,0);
                int e1=s1+ld;
                int s2=max(ws,e1);
                int total1=s2+wd;
                mini=min(mini,total1);

                int s3=max(ws,0);
                int e3=s3+wd;
                int s4=max(ls,e3);
                int total2=s4+ld;
                mini=min(mini,total2);
            }
        }
        return mini;
    }
};