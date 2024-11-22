class Solution {
public:

    string removeDigit(string n, char digit) {
        std::vector<string> gen;
        for(size_t i =0; i < n.size(); ++i){
            if(n[i] == digit)
                gen.push_back( 
                    n.substr(0, i) + n.substr(i + 1)
                );
        }
        
        return *std::max_element(gen.begin(), gen.end(),
            [](const std::string& a, std::string& b){
                if(a.size() != b.size())
                    return a.size() < b.size();
                return a < b;
            }
        );
    }
};
