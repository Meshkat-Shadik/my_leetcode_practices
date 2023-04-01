class Solution {
public:
    int search(vector<int>& n, int t) {
     int s = 0, e = n.size() -1;
     if (n.size() == 0)  return -1;
    while(s<e){
        int mid = s + (e-s)/2;
        if(n[mid] < t){
            s = mid+1;
        }
        else{
            e = mid;
        }
    }
        if(n[s] == t) return s;
        return -1;
    }
};