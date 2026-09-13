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
    void ReorderNode(ListNode* pos, int size){

        //pos ke right mein last node fit krni hai
        ListNode* last = pos;
        ListNode* prev = NULL;

        while (last->next != NULL){ 
            prev = last;
            last = last->next;

        }
        if (prev != NULL) prev->next = NULL;
        last->next = pos->next;
        pos->next = last;
        pos = pos->next;
        

    }
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL) return;
        ListNode* curr = head;
        int n = 0;

        while (!curr){
            n++;
            curr = curr->next;
        }
        curr = head;
        while(curr != NULL && curr->next != NULL){
            ReorderNode(curr, n);
            curr = curr->next;
            curr = curr->next;
        }

    }
};
