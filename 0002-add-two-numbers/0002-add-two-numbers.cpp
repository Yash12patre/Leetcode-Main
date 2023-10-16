class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
           int sum = 0;
        ListNode* dummy = new ListNode(0), *cur = dummy;
        while(l1 || l2) {
            int val1 = l1 ? l1->val : 0;
            int val2 = l2 ? l2->val : 0;
            sum += val1 + val2;
            cur->next = new ListNode(sum % 10);
            sum /= 10;
            cur = cur->next;
            l1 = l1 ? l1->next : l1;
            l2 = l2 ? l2->next : l2;
        }
        if(sum)
            cur->next = new ListNode(sum);
        cur = dummy->next;
        delete dummy;
        return cur;
    }
};