class Solution {
public:
bool isVowel(char ch)
    {
        char currCh = tolower(ch);
    if (currCh == 'a' || currCh == 'e' || currCh == 'i' || currCh == 'o' || currCh == 'u') return true;
        return false;
    }
    string reverseVowels(string str) {
         int s = 0, e = str.size()-1;
        while(s<e){
            if(!isVowel(str[s])){
                s++;
            }
            if(!isVowel(str[e])){
                e--;
            }
            if(isVowel(str[s]) && isVowel(str[e])){
                swap(str[s],str[e]);
                s++;
                e--;
            }
        }
        return str;
    }


};