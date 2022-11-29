class Solution {
public:
    int searchInsert(vector<int>& n, int t) {
        int len = n.size()-1;
        int s = 0, e = len;
        while(s<=e){
            int mid = s + (e-s)/2;
            if(n[mid] == t)
            {
                return mid;
            }
            if(n[mid]<t){
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        //cout<<s<<endl;
        return s;
    }
};