class Solution {
public:
    int getSum(int a, int b) {
        while(b != 0){
            int curr = a & b;
            a = a ^ b;
            b = curr << 1;
        }
        return a;
    }
};