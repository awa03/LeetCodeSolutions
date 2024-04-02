class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        auto it = max_element(std::begin(candies), std::end(candies));
        vector<bool> r;
        for(auto& i : candies){
            if(i == *it || (i + extraCandies) >= *it)
               r.push_back(true) ;
            else
                r.push_back(false) ;
        }
        return r;
    }
};
