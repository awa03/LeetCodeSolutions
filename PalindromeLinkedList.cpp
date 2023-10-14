// O(N) Time Complexity
// O(1) Space Complexity
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
        if (!head || !head->next) {
            return true; // Empty list or a list with a single element is a palindrome.
        }

        // Find the middle of the linked list using slow and fast pointers.
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast != nullptr && fast->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }

        // Reverse the second half of the linked list.
        ListNode* prev = nullptr;
        ListNode* current = slow;
        while (current) {
            ListNode* next = current->next;
            current->next = prev;
            prev = current;
            current = next;
        }

        // Compare the reversed second half with the first half.
        while (prev != nullptr) {
            if (head->val != prev->val) {
                return false;
            }
            head = head->next;
            prev = prev->next;
        }

        return true;
    }
};



/* -------------------------------------------------------------------- */

// "Bad Solution"

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
