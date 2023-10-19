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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* r = new ListNode();
        ListNode* rpointer = r;
        int carry =0;
        while(l1 || l2){
            int sum = carry;
            if(l1){
                sum += l1->val;
                l1 = l1->next;
            }
            if(l2){
                sum += l2->val;
                l2 = l2->next;
            }
            carry = sum / 10;
            rpointer->next = new ListNode(sum%10);
            rpointer = rpointer->next;


        }
        if(carry){
            rpointer->next = new ListNode(carry);
        }
        return r->next;
    }
};

// Solution #2

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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode dummy(0);  // dummy node
        ListNode* current = &dummy; // set curr = dumm
        int carry = 0; 
        while(l1 || l2 || carry){
            int sum = carry; 
            if(l1){
                sum += l1->val; // add node to sum
                l1 = l1->next; // iterate
            } if(l2){
                sum += l2->val; // add node to sum
                l2 = l2->next; // iterate
            }
            carry = sum / 10; // carry digiit (over 9)
            current->next = new ListNode(sum % 10); // set curr to digit
            current = current->next; // iterate
        } return dummy.next;
    }
};
