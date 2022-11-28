class Solution {
    string table[4][10] = {{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
                           {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
                           {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"},
                           {"", "M", "MM", "MMM"}
                          };
public:
    string intToRoman(int num) {
        // 
        int count = 0;
        string ans;
        while(num>0)
        {
            int fDigit = num%10;
            num = num/10;
            ans = table[count][fDigit]+ans;
            count++;
        }
        return ans;
    }
};