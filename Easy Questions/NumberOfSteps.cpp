class Solution {
public:
    int numberOfSteps(int num) {
        unsigned int steps = 0;
        while(num > 1){
            if(num % 2 == 0) {
                num/=2;
                steps++;
            }
            else {
                num -=1;
                num /=2;
                steps+=2;
            }
        } 
        if(num == 1) steps++;
        return steps;
    }
};
