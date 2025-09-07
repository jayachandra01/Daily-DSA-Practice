class Solution {
public:
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr)
            return false; // Step 1: A list with 0 or 1 node can't have a cycle

        ListNode* slow = head;       // Step 2: Initialize slow pointer
        ListNode* fast = head->next; // Step 2: Initialize fast pointer

        while (slow != fast) {      // Step 3: Loop until they meet or list ends
            if (fast == nullptr || fast->next == nullptr)
                return false;       // Step 4: Reached the end → no cycle
            
            slow = slow->next;          // Step 5: Move slow by 1
            fast = fast->next->next;   // Step 5: Move fast by 2
        }

        return true; // Step 6: slow and fast have met → cycle detected
    }
};
