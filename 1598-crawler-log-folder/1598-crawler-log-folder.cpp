class Solution {
public:
    int minOperations(vector<string>& s) {
        int len = s.size();
        int count = 0;
        for(int i=0 ; i<len ; i++){
            if(s[i] == "../"){  // sure it is ../
                if(count>0){
                    count--;
                }
                //cout<<s[i]<<" so -- , "<<count<<endl;
            }
            else if(s[i] == "./"){  //sure it is ./
                continue;
              //  cout<<s[i]<<" skiped , "<<count<<endl;
            }
            else{
                count++;
                //cout<<s[i]<<" so ++ , "<<count<<endl;
            }
        }
        return count;
    }
};