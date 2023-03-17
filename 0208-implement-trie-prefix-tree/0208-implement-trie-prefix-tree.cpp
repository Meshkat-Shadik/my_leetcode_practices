class TrieNode{
    public:
        bool isCompleted;
        TrieNode* child[26];
    TrieNode(){
        isCompleted = false;
        memset(child,0,sizeof(child));
    }
};


class Trie {
public:
    TrieNode* r;
    Trie() {
        r = new TrieNode();
    }
    
    void insert(string word) {
        TrieNode* n = r;
        for(char ch: word){
            int indx = ch - 'a';
            if(n->child[indx]==NULL)
            {
                n->child[indx] = new TrieNode();
            }
            n = n->child[indx];
        }
        n->isCompleted = true;
    }
    
    bool search(string word) {
        TrieNode* n = r;
        for(char ch:word){
            int indx = ch - 'a';
            if(n->child[indx] == NULL)
            {
                return false;
            }
            n = n->child[indx];
        }
        return n->isCompleted;
    }
    
    bool startsWith(string prefix) {
          TrieNode* n = r;
        for(char ch:prefix){
            int indx = ch - 'a';
            if(n->child[indx] == NULL)
            {
                return false;
            }
            n = n->child[indx];
        }
        return true;
    }
};

/**
 * Your Trie object will be instantiated and called as such:
 * Trie* obj = new Trie();
 * obj->insert(word);
 * bool param_2 = obj->search(word);
 * bool param_3 = obj->startsWith(prefix);
 */