class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;      // Step 1: Initialize 'prev' to NULL, which will be the new end of the list
        ListNode* curr = head;      // Step 2: 'curr' starts from the head of the list
        
        while (curr != NULL) {      // Step 3: Traverse through the list until the end
            ListNode* next_temp = curr->next; // Step 4: Store the next node temporarily
            curr->next = prev;                 // Step 5: Reverse the 'next' pointer of current node to point to 'prev'
            prev = curr;                       // Step 6: Move 'prev' to current node
            curr = next_temp;                  // Step 7: Move 'curr' to the next node
        }
        
        return prev; // Step 8: After the loop, 'prev' will point to the new head of the reversed list
    }
};
