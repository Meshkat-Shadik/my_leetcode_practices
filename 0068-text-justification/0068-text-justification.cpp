class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
       int n = words.size(), left = 0, right=0, size=0;
        vector<string>ans;
        while(left<n){
            right = findRight(words,maxWidth, left, size);
            ans.push_back(makeLine(words,maxWidth,left,right,size));
            left = right+1;
        }
        return ans;
    }
    
    int findRight(vector<string>& words, int maxWidth, int left, int& size){
        size = words[left].size();
        int right = left+1;
        while(right<words.size() && (size+words[right].size()+1 <=maxWidth)){
            size = size + words[right].size()+1;
            right++;
        }
        return right - 1;
    }
    string makeLine(vector<string>& words, int maxWidth, int left, int right, int size){
        int n = words.size(), spaceCount = maxWidth - size;
        if(left == right){
            return words[left]+addSpaces(spaceCount);
        }
        bool isLast = (right == n-1);
        string line="";
        int wordCount = right - left;
        int count=spaceCount/wordCount;
        int remainder = spaceCount % wordCount;
        
        while(left<right){
            line = line + words[left]+" ";
            left++;
            if(!isLast){
                string sp = addSpaces(count);
                if(remainder>0){
                    sp = sp + " ";
                }
                 remainder--;
                line = line + sp;
            }
        }
        line = line + words[right];
        if(isLast){
            line = line + addSpaces(spaceCount);
        }
        return line;
    }
    string addSpaces(int count){
        string sp="";
        
        for(int i=0; i<count; i++)
            sp+=" ";
        
        return sp;
    }
};