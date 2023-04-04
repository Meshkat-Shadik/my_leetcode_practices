class Solution {
public:
    void merge(vector<int>& n1, int m, vector<int>& n2, int n) {
        int a = m-1, b = n-1, siz = m+n-1;
        while(b>=0){
            if(a>=0 && n1[a]>n2[b]){
                n1[siz] = n1[a];
                a--;
                siz--;
            }
            else{
                n1[siz] = n2[b];
                b--;
                siz--;
            }
        }
    }
};