class RecentCounter {
public:
    RecentCounter() {}
    
    int ping(int t) {
       int ele = t - 3000; 
       while(!recentPings.empty() && ele > recentPings.front()){
            recentPings.pop();
        }
        recentPings.push(t);
        return recentPings.size();
    }


private:
  queue<int> recentPings;
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
