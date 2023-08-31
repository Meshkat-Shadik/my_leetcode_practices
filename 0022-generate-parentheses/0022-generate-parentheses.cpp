class Solution {
public:
    void combination(int& n, int open, int close, vector<string>&res, string str){
        if(open == n && close == n){
            res.push_back(str);
            return;
        }
        if(open<n){
            combination(n,open+1, close, res, str+"(");
        }
        if(open>close){
            combination(n,open, close+1, res, str+")");
        }
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string>res;
        combination(n,0,0,res,"");
        return res;
    }
};