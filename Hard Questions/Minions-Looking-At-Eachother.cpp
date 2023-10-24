class Solution {
public:
    vector<int> canSeePersonsCount(vector<int>& heights) {
        stack<int> s; // stack for view
        vector<int> target(heights.size());
        for(int i = heights.size()-1; i>=0; i--){ // iterate through list
            int count = 0;
            while(!s.empty() && s.top() < heights[i]){
                s.pop();
                ++count;
            }
            if(!s.empty()){
                ++count;
            }
            s.push(heights[i]);
            target[i] = count;
        } return target;
    }
};
