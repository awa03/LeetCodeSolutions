#include <sstream>
#include <cstring>
/*
Inital Thought: I could basically count the words in cache and then compare the mapping
counts based on their occurance. 

[dog: 2, cat: 2]
[a: 2, b: 2]

However this wouldnt account for word order soooo wouldnt work.

I could also map each like
[(dog, a): 0, (cat, b): 0]

and implement a sort of boyer moore algorithm in order to see if they map correctly, 

Or just count each occurance and compare the count when im iterating
im going to do this solution ^
*/
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        unordered_map<char, int> pCache;
        unordered_map<std::string, int> sCache;
        string sWord;
        std::istringstream iss(s);
        int i = 0;
        while (std::getline(iss, sWord, ' ')) {
            if (i >= pattern.size()) return false;  
            int sC = sCache.emplace(sWord, i).first->second;
            int pC = pCache.emplace(pattern[i], i).first->second;
            if (sC != pC) return false;
            i++;
        }
        return i == pattern.size();
    }
};
