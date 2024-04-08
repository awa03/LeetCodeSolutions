class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        std::unordered_map<string, std::vector<string> > count;
        for(auto x : strs){
            string word = x;
            sort(word.begin(), word.end());
            count[word].push_back(x);
        }
        vector<vector<string>> r;
        for(auto& x : count){
            r.push_back(x.second);
        }
        return r;
    }
};
