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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2) {
        if(head1 == NULL) return head2;
        if(head2 == NULL) return head1;
        
        ListNode* head = new ListNode(-1);
        ListNode* temp = head;
        
        while(head1 && head2){
            if(head1->val > head2->val){
                temp->next = head2;
                head2 = head2->next;
            } else {
                temp->next = head1;
                head1 = head1->next;
            }
            temp = temp->next;
        }
        if(head1 == NULL)
            temp->next = head2;
        else
            temp->next = head1;
        return head->next;
    }
};