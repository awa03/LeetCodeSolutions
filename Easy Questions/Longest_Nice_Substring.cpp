#include <string>
#include <unordered_set>

using namespace std;

class Solution {
public:
    string longestNiceSubstring(string s) {
        string longestNice;
        for (int i = 0; i < s.size(); ++i) {
            for (int j = i + 1; j < s.size(); ++j) {
                string substring = s.substr(i, j - i + 1);
                if (isNice(substring) && substring.size() > longestNice.size()) {
                    longestNice = substring;
                }
            }
        }
        return longestNice;
    }
    
    bool isNice(const string& s) {
        unordered_set<char> upper, lower;
        for (char c : s) {
            if (isupper(c)) {
                upper.insert(c);
            } else {
                lower.insert(c);
            }
        }
        if (upper.size() != lower.size()) return false;
        for (char c : upper) {
            if (!lower.count(tolower(c))) return false;
        }
        return true;
    }
};
