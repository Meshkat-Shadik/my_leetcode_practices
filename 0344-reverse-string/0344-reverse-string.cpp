class Solution {
public:
    void reverseString(vector<char>& s) {
        int i = s.size()-1;
        int j = 0;
        while(i>j){
            swap(s[i],s[j]);
            i--;
            j++;
        }
    }
};