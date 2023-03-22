class Solution {
public:
    int smallestEvenMultiple(int n) {
        return  n + n * (n % 2);
    }
};