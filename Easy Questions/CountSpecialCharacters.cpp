#include <unordered_set>
#include <string>
#include <cctype>

class Solution {
public:
    int numberOfSpecialChars(std::string word) {
        std::unordered_set<char> specialChars;
        
        for(auto& c : word) {
            char lower_c = std::tolower(c);
            char upper_c = std::toupper(c);
            
            
            if (specialChars.find(lower_c) == specialChars.end() && lower_c != upper_c && word.find(lower_c) != std::string::npos && word.find(upper_c) != std::string::npos) {
                specialChars.insert(lower_c); 
            }
        }
        
        return specialChars.size();
    }
};
