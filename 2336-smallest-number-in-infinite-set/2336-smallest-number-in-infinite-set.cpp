class SmallestInfiniteSet {
public:
    set<int>s;
    int c;
    SmallestInfiniteSet() {
        c = 1;
    }
    
    int popSmallest() {
        if(!s.empty()){
            int top = *s.begin();
            s.erase(top);
            return top;
        }
       return c++;
    }
    
    void addBack(int num) {
        if(num<c){
            s.insert(num);
        }
    }
};

/**
 * Your SmallestInfiniteSet object will be instantiated and called as such:
 * SmallestInfiniteSet* obj = new SmallestInfiniteSet();
 * int param_1 = obj->popSmallest();
 * obj->addBack(num);
 */