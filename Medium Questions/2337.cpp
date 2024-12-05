class Solution {

/*



*/

public:
    bool canChange(string start, string target) {
        if(target.length() != start.length())
            return false;
        if(target == start){return true;}

        int i =0, j =0;
        int countSL = 0, countSR = 0, countTL = 0, countTR = 0; 

        for(auto& c : start){
            if(c == 'L'){
                countSL++;
            }
            else if(c == 'R'){
                countSR++;
            }
        }
        for(auto& c : target){
            if(c == 'L'){
                countTL++;
            }
            else if(c == 'R'){
                countTR++;
            }
        }

        if(countSL != countTL || countSR != countTR) return false;

        for(; i < start.size(); i++){
            if(start[i] != '_'){
                while(start[i] != target[j]){
                    if(target[j] != '_' && target[j] != start[i])
                        return false;
                    j++; 
                }

                if(start[i] == 'R' && i > j)
                    return false;
                if(start[i] == 'L' && i < j) 
                    return false;
                j++;
            }
        }

        cout << i << ", " << j; 
        if(i > start.size() || j > start.size() || i ==0 || j ==0)
            return false;

        return true;
    }
};
