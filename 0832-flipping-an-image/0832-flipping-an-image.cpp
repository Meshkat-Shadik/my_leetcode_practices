class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& img) {
        
        int len = img.size();
        for(int i=0; i<len; i++)
        {
           img[i] = reverse(img[i]);
           img[i] = inverse(img[i]);
        }
        return img;
    }
    
    vector<int>reverse(vector<int>mat)
    {
        int i=0, j = mat.size()-1;
        while(i<j)
        {
            int temp = mat[i];
            mat[i++] = mat[j];
            mat[j--] = temp;
        }
        return mat;
    }
    
    vector<int>inverse(vector<int>mat)
    {
        int len = mat.size();
        for(int i=0;i<len;i++)
        {
            mat[i] = mat[i]^1;
        }
        return mat;
    }
};