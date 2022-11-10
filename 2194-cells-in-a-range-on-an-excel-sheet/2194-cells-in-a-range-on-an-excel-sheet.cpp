class Solution {
public:
    vector<string> cellsInRange(string s) {
        char startChar = s[0], endChar = s[3];
        int startInd = s[1]-'0', endInd = s[4]-'0';
        cout<<startChar<<","<<endChar<<endl;
        cout<<startInd<<","<<endInd<<endl;
        
        vector<string>ans;
        
        for(char i=startChar; i<=endChar; i++)
        {
            for(int j=startInd; j<=endInd; j++)
             {
                ans.push_back((i+to_string(j)));
             }
        }
        
        return ans;
    }
};