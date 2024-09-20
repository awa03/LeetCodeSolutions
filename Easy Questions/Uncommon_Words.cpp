class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {
        std::unordered_map<std::string, int> wordCount;
        std::istringstream stream1(s1), stream2(s2);
        std::string word;

        while (stream1 >> word) {
            wordCount[word]++;
        }

        while (stream2 >> word) {
            wordCount[word]++;
        }

        std::vector<std::string> res;

        for (const auto& entry : wordCount) {
            if (entry.second == 1) {
                res.push_back(entry.first);
            }
        }

        return res;
    }
};
