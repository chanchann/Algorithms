class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        // base case 
        if(!head || !head->next) return head;
        
        ListNode* node = reverseList(head->next);
        head->next->next = head;
        head->next = NULL;
        return node;
    }
};