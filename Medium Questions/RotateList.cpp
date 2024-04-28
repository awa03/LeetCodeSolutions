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
    ListNode* rotateRight(ListNode* head, int k) {
       if(head == nullptr || head->next == nullptr){return head;}
       int size = GetSize(head);
       for(int i =0; i< k % size; i++) {
        ListNode* end = GetEnd(head);
        end->next = head;
        head = end;
       }
       return head;
    }
    int GetSize(ListNode* curr){
        if(curr == nullptr) {return 0;}
        else return 1 + GetSize(curr->next);
    }
    ListNode* GetEnd(ListNode* curr){
        if(curr->next != nullptr){
            while(curr->next->next != nullptr){
                curr = curr->next;
            }
        }
        ListNode* prev = curr; 
        ListNode* end = curr->next; 
        prev->next = nullptr;
        return end;
    }
};
