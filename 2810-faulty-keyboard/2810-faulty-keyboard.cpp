class Solution {
public:
    string finalString(string s) {
        string ans;
        int len = s.length();
        for(int i=0; i<len;i++){
            if(s[i]=='i'){
                rev(0,i-1,s);
            }
        }
        //complete the previous swapping all things 
        //then just check which are not i push them to ans
        for(int i=0; i<len; i++){
            if(s[i] != 'i'){
                ans.push_back(s[i]);
            }
        }
        
        return ans;
    }
    
    void rev(int start, int end, string& s){
        while(start<=end){
            swap(s[start],s[end]);
            start++;
            end--;
        }
    }
    
};