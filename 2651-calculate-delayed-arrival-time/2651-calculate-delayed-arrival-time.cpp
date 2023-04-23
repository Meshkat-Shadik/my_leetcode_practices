class Solution {
public:
    int findDelayedArrivalTime(int a, int d) {
        a = a+d;
        a = a%24;
        return a;
    }
};