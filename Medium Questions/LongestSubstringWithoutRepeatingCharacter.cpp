class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> count;  
        int max = 0;
        for(int start = 0; start < s.size(); start++) {
            int end = start;
            while (end < s.size() && count.find(s[end]) == count.end()) {
                count.insert(s[end]);
                end++;
            }
            max = max > count.size() ? max : count.size();
            count.clear();
        }
        return max;
    }
};
