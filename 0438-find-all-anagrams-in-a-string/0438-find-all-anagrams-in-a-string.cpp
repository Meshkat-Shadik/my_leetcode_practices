class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>res;
        unordered_map<char,int>m;
        int psiz = p.size();
        int ssiz = s.size();
        for(int i=0;i<psiz;i++)
        {
            m[p[i]]++;
        }
        cout<<m.size()<<endl;
        
        int count = m.size();
        int start = 0, end = 0;
        
        while(end<ssiz)
        {
            //calculation
            if(m.find(s[end])!=m.end())
            {
                m[s[end]]--;
                if(m[s[end]] == 0)
                {
                    count--;
                }
            }
            
            if(end-start+1<psiz)
            {
                end++;
            }
            else if(end-start+1 == psiz)
            {
                //ans calculation
                if(count == 0)
                {
                    res.push_back(start);
                }
               
                if(m.find(s[start])!=m.end())
                {
                    m[s[start]]++;
                    if(m[s[start]]==1)
                    {
                        count++;
                    }
                }
                
                start++;
                end++;
            }
            
        }
        return res;
    }
};