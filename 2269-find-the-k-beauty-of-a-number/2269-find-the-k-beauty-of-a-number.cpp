class Solution {
public:
    bool beautyCheck(string s1, string s2)
    {
        int num = stoi(s1);
        int k = stoi(s2);
        
       if(k!=0) return !(num%k);
        
        return false;
    }
    
    
    int divisorSubstrings(int num, int k) {
        
       int start = 0, end = 0;
       string s = to_string(num);
       int len = s.size();
       int count = 0;
        
        while(end<len)
        {
            //calculation
            string window = s.substr(start,end-start+1);
            
            if(end-start+1<k)
            {
                end++;
            }
            //hit window
            else if(end-start+1 == k)
            {
                //answer calculation
                if(beautyCheck(s,window))
                {
                    count++;
                }
                
                //slide
                start++;
                end++;
            }
            
        }
        return count;
    }
};