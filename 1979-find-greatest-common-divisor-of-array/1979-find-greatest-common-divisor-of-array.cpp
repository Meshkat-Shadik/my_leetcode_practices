class Solution {
public:
    int gcd(int a,int b){
        while(a!=0 && b!=0)
        {
            if(a>b){
                a = a%b;
            }
            else{
                b = b%a;
            }
        }
        return max(a,b);
    }
    
    
    int findGCD(vector<int>& nums) {
        int maxx = INT_MIN, minn = INT_MAX;
        int temp;
        
        
        for(int i=0; i<nums.size();i++)
        {
            maxx = max(maxx,nums[i]);
            minn = min(minn,nums[i]);
        }
        
        return gcd(maxx,minn);
    }
};