class T{
    public:
    bool isCompleted;
    T* child[26];
    T(){
        isCompleted = false;
        memset(child,0,sizeof(child));
    }
};

class WordDictionary {
public:
    T* r;
    WordDictionary() {
        r = new T();
    }
    
    void addWord(string word) {
        T* n = r;
        for(char ch:word){
            int indx = ch - 'a';
            if(n->child[indx]==NULL)
            {
                n->child[indx] = new T();
            }
            n = n->child[indx];
        }
         n->isCompleted = true;
    }
    
    bool search(string word) {
        return helper(word,r);
    }
    
    bool helper(string w, T* n)
    {
        int len = w.length();
        for(int i = 0; i<len; i++)
        {
            char ch = w[i];
            
            if(ch == '.'){
                  for(auto c: n->child)
                {
                    if(c != NULL && helper(w.substr(i+1),c))
                    {
                        return true;
                    }
                }
                 return false;
            }
            else
            {
                int indx = ch - 'a';
                if(n->child[indx] == NULL)
                {
                    return false;
                }
                n = n->child[indx]; 
            }
        }
        return n->isCompleted;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */