class Solution {
public:
    bool isValid(string s) {
       stack<char> list;
       int i=0;
       while(i< s.length()){
           if(s[i] == ')' && list.size() > 0 && list.top() == '('){
               list.pop();
           }
           else if(s[i] == '}' && list.size() > 0 && list.top() == '{'){
               list.pop();
           }
           else if(s[i] == ']' && list.size() > 0 && list.top() == '['){
               list.pop();
           }
           else {
               list.push(s[i]);
           }
           i++; // iterate
       }
       if(list.size() == 0){
           return true;
       } 
       return false;

    }
};

// Another Solution
class Solution {
public:
    bool isClose(char& c){
        return (c == ')' || c == ']' || c == '}'); 
    }
    bool isSame(char& o, char& c) {
        return((o == '(' && c == ')') ||
               (o == '{' && c == '}') || 
               (o == '[' && c == ']')
            );
    }
    bool isValid(string s) {
        stack<char> par;
        for(char& c : s){
            if(isClose(c)){
                if(par.empty() || !isSame(par.top(), c)) return false;
                else par.pop();
            }
            else par.push(c);
        }
        return (par.empty());
    }
};
