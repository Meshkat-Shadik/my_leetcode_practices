class Solution {
public:
    double findMaxAverage(vector<int>& n, int k) {
         int start=0,end=0;
        double sum=0,mx=INT_MIN;
        int len = n.size();
        while(end<len){
            if(end-start+1<k)
            {
                sum = sum+n[end];
                //cout<<"add holo = "<<n[end]<<endl;
                end++;
            }
            else if(end-start+1==k){
                //cout<<"add holo = "<<n[end]<<endl;
                sum = sum+n[end];
               // cout<<"prev sum = "<<sum<<endl;
                mx = max(mx,sum);
                //cout<<"prev = "<<n[start]<<endl;
                end++;
               // cout<<"end = "<<n[end]<<endl;
                
                //cout<<"min holo = "<<n[start]<<endl;
                sum = sum-n[start];
                start++;
                
            }
            
        }
       // cout<<mx<<","<<k<<endl;
       // cout<<mx/k<<endl;
        return mx/k;
    }
};