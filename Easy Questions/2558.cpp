#include <math.h>
class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
       std::priority_queue<int> gifts_pq;
       for(auto& g : gifts){
        gifts_pq.push(g);
       }

       for(int i =0; i < k; i++){
        auto curr = gifts_pq.top();
        gifts_pq.pop();
        gifts_pq.push(sqrt(double(curr)));
       }

       long long sum = 0;
       while(!gifts_pq.empty()){
        sum+=gifts_pq.top();
        gifts_pq.pop();
       }
       return sum;
    }
};
