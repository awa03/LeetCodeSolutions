class Solution {
public:
    // sort by key comp function
    static bool cmp(pair<int, int>& a, pair<int, int>& b){
        return a.second > b.second;
    }

    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 1: Cache Items in the list <string, int>  (int being count)
        unordered_map<int, int> cache;
        for(auto& n : nums){
            cache[n]++;
        }

        // cast to a vector
        vector<pair<int, int>> r;
        for(auto& c : cache){
            r.push_back(c);
        }

        // sort that vector so we know the occurance relative
        sort(r.begin(), r.end(), cmp);

        // only add the appropriate elements
        vector<int> rs;
        for(int i =0; i < k; i++){
            rs.push_back(r[i].first);
        }

        // 4: return vector
        return rs;
    }
};
