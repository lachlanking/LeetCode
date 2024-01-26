class RecentCounter {
public:
    RecentCounter() {
        
    }
    
    int ping(int t) {
        int range = t - 3000;
        Q.push(t);
        while (Q.front() < range) Q.pop();
        return Q.size();
    }
    
private:
    queue<int> Q;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */