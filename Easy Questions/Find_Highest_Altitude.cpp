class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int c = 0;
        int g = 0;
        for(auto& el : gain){
            g += el;
            c = std::max(c, g);
        } 
        return c;
    }
};
