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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* curr = head;
        int sz = 0;
        while (curr){
            curr = curr->next;
            sz++;
        }

        int pos = sz - n;
        if (pos == 0) return head->next;
        curr = head;
        for (int i = 0; i < pos - 1; i++){
            curr = curr->next;
        }

        //Remove the curr->next node
        curr->next = curr->next->next;

        return head;
    }
};
