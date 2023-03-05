class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        map<int,string>m;  //normal map automatically sorts the data
        int len = n.size();
        for(int i=0; i<len; i++)
        {
            m[h[i]]=n[i];
        }
        n.clear();
        for(auto it=m.rbegin(); it != m.rend(); it++)
        {
            n.push_back(it->second);
        }
        return n;
    }
};