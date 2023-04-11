class Solution {
public:
    int maximum69Number (int n) {
        int num = n;
        int track = 1;
        int temp = 0;
        while(num!=0){
            if(num%10 == 6){
                temp = track;
            }
            track = track*10;
            num = num/10;
        }
         //cout<<"last "<<temp<<endl;
        return n + (3*temp);
    }
};