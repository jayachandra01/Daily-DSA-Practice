class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        // Step 1: Create a dummy node to simplify edge cases
        ListNode dummy(0);
        ListNode* tail = &dummy; // 'tail' will always point to the last node in the merged list

        // Step 2: Traverse both lists until one is empty
        while (l1 != nullptr && l2 != nullptr) {
            if (l1->val < l2->val) {
                tail->next = l1; // Attach l1 node to the merged list
                l1 = l1->next;   // Move l1 to its next node
            } else {
                tail->next = l2; // Attach l2 node to the merged list
                l2 = l2->next;   // Move l2 to its next node
            }
            tail = tail->next; // Move tail to the last node
        }

        // Step 3: Attach the remaining nodes, if any
        if (l1 != nullptr) {
            tail->next = l1;
        } else {
            tail->next = l2;
        }

        // Step 4: Return the head of the merged list
        return dummy.next;
    }
};
