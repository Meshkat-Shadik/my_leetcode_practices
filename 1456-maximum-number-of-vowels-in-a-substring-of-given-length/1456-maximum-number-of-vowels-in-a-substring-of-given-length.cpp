class Solution {
    
    int isVowel(char& c){
        if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
            return 1;
        }
        return 0;
    }
    
public:
    int maxVowels(string s, int k) {
        int count=0,maxx=0;
        for(int i=0;i<s.size();i++){
            count = count + isVowel(s[i]);
            if(i>=k){
                count = count - isVowel(s[i-k]);
            }
            maxx = max(maxx,count);
        }
        return maxx;
    }
};
