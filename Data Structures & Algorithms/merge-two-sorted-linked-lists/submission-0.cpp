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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == NULL) return list2;
        if (list2 == NULL) return list1;

        ListNode* head1 = list1;
        ListNode* head2 = list2;

        ListNode* head = head1;

        ListNode* prev = NULL;

        while (head1 != NULL && head2 != NULL){
            if (head1->val >= head2->val){
                ListNode* temp = head2->next;
                head2->next = head1;
                if (prev != NULL) prev->next = head2;
                else head = head2;
                prev = head2;
                head2 = temp;
                continue;
            }
            prev = head1;
            head1 = head1->next;
        }

        if (head2 != NULL){
            prev->next = head2;
        }
        return head;
    }
};
