class Solution {
public:
    int findTheWinner(int n, int k) {
        // if(n==1) return 1;
        // return (findTheWinner(n-1,k) + (k-1) % n+1);
        if(n==1) return 1;
        if(k==1) return n;
        queue<int> q;
        for(int i=1 ; i<=n ; i++){
            if(i%k == 0) continue;
            q.push(i);
        }
        int k0 = (k-n%k)%n;
        for(int i =1 ; i<k0 ; i++){
            q.pop();
            q.push(i);
        }
        if(q.size() == 1) return q.front();
        q.pop();
        while(q.size()>1){
            for(int i=0 ; i<k-1 ; i++){
                q.push(q.front());
                q.pop();
            }
            q.pop();
        }
        return q.front();
    }
};