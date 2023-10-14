// not within time constraints, just testing stack and queue method
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    bool isPalindrome(ListNode* head) {
        stack<int> listStack;
        queue<int> listQue;
        ListNode* curr = head;
        while(curr != nullptr){
            listStack.push(curr->val);
            listQue.push(curr->val);
            curr = curr->next; // iterate through list
        }
        while(!listStack.empty()){
            if(listStack.top() != listQue.front()){
                listStack.pop();
                listQue.pop();
                return false;
            }
        } return true;
    }
};
