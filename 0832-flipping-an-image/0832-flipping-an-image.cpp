class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& img) {
        int len = img.size();
        for(int i=0; i<len; i++)
        {
            reverse(img[i].begin(),img[i].end());
            for(int j = 0; j<img[i].size(); j++)
            {
                img[i][j] = img[i][j]^1;
            }
        }
        return img;
    }
};