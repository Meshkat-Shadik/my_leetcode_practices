class Solution {
public:
    int findLucky(vector<int>& arr) {
        int temp[501] = {};
        for(int i=0;i<arr.size();i++){
            temp[arr[i]]++;
        }
        //looping behind to find greatest first
        for(int i=arr.size();i>0;i--){
            if(i == temp[i])
                return i;
        }
        return -1;
    }
};