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
        ListNode* pt = head, *temp = head;
        for(int i =0 ; i<n ; i++) pt = pt->next;
        if(!pt) return head->next;
        while(pt->next){
            pt = pt->next;
            temp = temp->next;
        }
        temp->next = temp->next->next;
        return head;
    }
};