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
    ListNode* reverseList(ListNode* head) {
        // New List
        ListNode* prev = nullptr;
        // Curr Node
        ListNode* curr = head;
        // Next Node
        ListNode* next = nullptr;

        /*
        1 -> 2 -> 3 -> 4 = 1 <- 2 <- 3 <- 4
        */

        while(curr != nullptr){
            next = curr->next; // next node is equal to curr next
            curr->next = prev; // curr next is equal to prev
            prev = curr;       // prev = curr
            curr = next;       // curr = next
        }
        return prev;
    }
};
