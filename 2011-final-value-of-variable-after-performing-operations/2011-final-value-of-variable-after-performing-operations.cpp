class Solution {
public:
    int finalValueAfterOperations(vector<string>& op) {
       
        //45 is - in ascii
        //43 is + in ascii
        //X++ or ++X both holds + at 1th index, so just check that
        //if we take 44, then 44-45 will result --
        //44-43 will result ++
        int count = 0;
        for(int i=0;i<op.size();i++){
            count = count+(44-op[i][1]);
        }
        return count;
    }
};