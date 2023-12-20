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
