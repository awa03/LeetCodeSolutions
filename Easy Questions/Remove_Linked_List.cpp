class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        // Handle the case where the list is empty
        if (head == nullptr) {
            return nullptr;
        }

        // Remove the first element if it matches the value
        while (head != nullptr && head->val == val) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }

        // Use a helper function to remove subsequent occurrences
        helper(head, val);

        return head;
    }

    void helper(ListNode* curr, int val) {
        if (curr == nullptr) {
            return;
        }

        ListNode* temp = curr->next;

        while (temp != nullptr && temp->val == val) {
            curr->next = temp->next;
            delete temp;
            temp = curr->next;
        }

        helper(curr->next, val);
    }
};
