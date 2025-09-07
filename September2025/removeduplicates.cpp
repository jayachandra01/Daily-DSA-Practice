class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Step 1: Start from the head node
        ListNode* current = head;

        // Step 2: Traverse the list while current and current->next are not null
        while (current != nullptr && current->next != nullptr) {
            if (current->val == current->next->val) {
                // Step 3: If current node value equals next node value, skip next node
                current->next = current->next->next;
            } else {
                // Step 4: Move to the next node if no duplicate
                current = current->next;
            }
        }

        // Step 5: Return the modified head node
        return head;
    }
};
