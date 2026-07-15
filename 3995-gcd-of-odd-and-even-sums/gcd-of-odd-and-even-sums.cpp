class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        //The sum of the first n odd numbers is a perfect square (n²), and the sum of the first n even numbers is n(n+1). Since n and n+1 are consecutive integers, they are always coprime — so the GCD collapses down to just n.
        return n;
    }
};