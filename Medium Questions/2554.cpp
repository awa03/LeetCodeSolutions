class Solution {
public:

/*
must be 1-n
each int chosen at least once
chosen should not be in banned
should not excede max sum
*/
    int maxCount(vector<int>& banned, int n, int maxSum) {
        map<int, int> bannedCache;
        for(auto& e : banned){
            bannedCache[e]++;
        }

        int sum = 0;
        int count = 0;
        for(int i =1; i <= n; i++){
            auto findIfBanned = bannedCache.find(i);
            if((findIfBanned == bannedCache.end()) && (sum + i <= maxSum)){
                sum+=i;
                count++;
            }
        }

        return count;
    }
};
