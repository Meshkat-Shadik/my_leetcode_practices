class Solution {
public:
    int find(vector<int>& p){
        int count = 0, sum = 0;
        for(int i=0;i<p.size();i++){
            if(count>0){
                sum = sum + 2*p[i];
            }
            else{
                sum = sum+p[i];
            }
            count --;
            if(p[i]==10){
                count = 2;
            }
        }
        return sum;
    }
    
    
    int isWinner(vector<int>& p1, vector<int>& p2) {
        
        if(find(p1)>find(p2)){
            return 1;
        }
        else if(find(p1)==find(p2)){
            return 0;
        }
        else {
            return 2;
        }
    }
};