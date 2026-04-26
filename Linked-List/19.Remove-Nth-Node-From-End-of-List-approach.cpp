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
        ListNode* slow = head;
        ListNode* fast = head;

        for(int i=1;i<=n;i++){
            fast = fast->next;
        }
        if(fast == NULL) return head->next;
        while(fast->next != NULL){
            slow = slow->next;
            fast = fast->next;
        }
        ListNode* dnode = slow->next;
        slow->next = dnode->next;
        delete dnode;
        return head;
    }
};

// tc: O(n) where n is the number of nodes in the linked list
// sc: O(1)
// Approach: We can use two pointers, slow and fast, to traverse the linked list. We start by moving the fast pointer n steps ahead of the slow pointer. Then we move both pointers forward one step at a time until the fast pointer reaches the end of the linked list. At this point, the slow pointer will be just before the node to be removed. We can then update the next pointer of the slow pointer to skip the node to be removed and delete the node to be removed. Finally, we return the head of the modified linked list. If the fast pointer becomes NULL after moving n steps ahead, it means we need to remove the head of the linked list, so we return head->next.