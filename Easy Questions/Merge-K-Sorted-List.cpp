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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> unsort;
        for(auto& temp : lists){
            while(temp != nullptr){
                unsort.push_back(temp->val); // add to unsorted vector
                temp = temp->next; // iterate through
            }
        }
        sort(unsort.begin(),unsort.end(),greater<int>());
        ListNode* head= nullptr;
        for(auto n : unsort){
            ListNode* newNode = new ListNode(n);
            newNode->next = head;
            head = newNode;
        }
        return head;
    }
};
