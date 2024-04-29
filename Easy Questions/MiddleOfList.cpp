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
    ListNode* middleNode(ListNode* head) {
        ListNode* curr = head;
        int size = Size(head); 
        for( int i =0; i < size / 2; i++) {
            curr = curr->next;
        }
        return curr;

    }
    int Size(ListNode* curr) {
        if(curr == nullptr) return 0;
        else return Size(curr->next) + 1;
    }
};
