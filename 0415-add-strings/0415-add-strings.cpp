class Solution {
public:
    string addStrings(string n1, string n2) {
        int sum = 0;
        int l1 = n1.size()-1;
        int l2 = n2.size()-1;
        string res;
        
        while(l1>=0 && l2>=0){
            sum = sum + (n1[l1--]-'0') + (n2[l2--]-'0');
            res.push_back((sum%10)+'0');
            sum = sum/10;
        }
        
        while(l1>=0){
            sum = sum + (n1[l1--]-'0');
            res.push_back((sum%10)+'0');
            sum = sum/10;
        }
        
        while(l2>=0){
            sum = sum + (n2[l2--]-'0');
            res.push_back((sum%10)+'0');
            sum = sum/10;
        }
        
        if(sum>0){
            res.push_back((sum%10)+'0');
        }
            
        reverse(res.begin(),res.end());
        return res;
        
    }
};