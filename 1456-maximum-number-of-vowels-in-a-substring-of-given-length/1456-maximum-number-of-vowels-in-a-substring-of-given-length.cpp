class Solution {
public:
      bool isVowel(char c) {
        return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
    }

    int maxVowels(string s, int k) {
        int l = 0, r;
        int sum = 0;
        for (r = 0; r < k; ++r) {
            sum += isVowel(s[r]);
        }

        int maxsum = sum;
        while (r < s.size()) {
            sum -= isVowel(s[l++]);
            sum += isVowel(s[r++]);
            maxsum = max(maxsum, sum);
        }
        return maxsum;
    }
};
