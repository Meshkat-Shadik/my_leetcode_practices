class Solution {
public:
    int countDigits(int num) {
        int count = 0;
        int n = num;
        while(num>0)
        {
            int dig = num%10;
            if(n%dig == 0)
            {
                count++;
            }
            num = num/10;
        }
        return count;
    }
};