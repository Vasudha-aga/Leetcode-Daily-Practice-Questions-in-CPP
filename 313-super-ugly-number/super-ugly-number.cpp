class Solution {
public:
    int nthSuperUglyNumber(int n, vector<int>& primes) {
        int k = primes.size();
        vector<long long> ugly(n);
        vector<int> index(k,0);
        ugly[0] = 1;
        for(int i =1 ; i<n ; i++){
            long long nextUgly = LLONG_MAX;
            for(int j = 0; j<k ; j++){
                long long candidate = ugly[index[j]] * primes[j];
                nextUgly = min(nextUgly , candidate);
            }
            ugly[i] = nextUgly;
            for(int j = 0 ; j<k ; j++){
                if(ugly[index[j]] * primes[j] == nextUgly) index[j]++;
            }
        }
        return ugly[n-1];
    }
};