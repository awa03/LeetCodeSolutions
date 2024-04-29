#define FAST \
ios_base::sync_with_stdio(false);\
cin.tie(nullptr);
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        FAST
        unordered_map<char, int> mCount;
       for(auto& c : magazine){
        mCount[c]++;
       } 
       for(auto& c : ransomNote){
        if(mCount.find(c) == mCount.end()){
            return false;
        }
        else if(mCount[c] == 0){
            return false;
        }
        else {
            mCount[c]--;
        }
       }
       return true;
    }
};
