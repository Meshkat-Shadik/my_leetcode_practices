class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
         int len = mat.size();
    int sum = 0;
      for(int i=0; i<len;i++)
      {
          sum = sum + (mat[i][i]); //primary
          sum = sum + (mat[len-1-i][i]); //secondary
      }
      if(len%2 == 0){
          return sum;
      }
      else{
        return sum - mat[len/2][len/2];      
      }
    }
};