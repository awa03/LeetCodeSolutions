class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
      ios_base::sync_with_stdio(false);
      // First ---> value     Second ---> occurences
      unordered_map<int, int> count;
      for(auto& e : arr){
        count[e]++;
      }
      unordered_set<int> c;
      for(auto& e : count){
        if(c.find(e.second) == c.end()){
          c.insert(e.second);
        }
        else {
          return false;
        }
      }
      return true;
    }
};
// ----------------------- O(N) Time ------------------------ //
