class Solution {
public:
    int find(vector<int>& p){
        int last1=0,last2=0,sum=0;
        
        for(int i = 0;i<p.size(); i++)
        {
            if(last1==10||last2==10)
            {
                sum = sum + (p[i]*2);
            }
            else
            {
                sum = sum + p[i];
            }
            
            last2=last1;
            last1=p[i];
        }
        return sum;
    }
    
    
    int isWinner(vector<int>& p1, vector<int>& p2) {
        
        int x = find(p1);
        int y = find(p2);
        
        if(x>y){
            return 1;
        }
        else if(x==y){
            return 0;
        }
        else {
            return 2;
        }
    }
};