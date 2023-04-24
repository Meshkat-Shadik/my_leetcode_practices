class Solution {
public:
    int sum(int n, int x){
        n = n/x;
        return x * n * (n+1)/2;
    }
    
    int sumOfMultiples(int n) {
       int t = sum(n,3);
       int f = sum(n,5);
       int s = sum(n,7);
       int tf = sum(n,15);
       int fs = sum(n,35);
       int ts = sum(n,21);
       int tfs = sum(n,105);
        
      return t+f+s-tf-fs-ts+tfs;
    }
};