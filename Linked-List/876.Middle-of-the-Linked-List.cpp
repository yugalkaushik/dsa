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
    ListNode* middleNode(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
        }
        return slow;
    }
};
// tc: O(n) sc: O(1)
// Approach: We can use the slow and fast pointer approach to find the middle of the linked list. We can initialize two pointers, slow and fast to the head of the linked list. We can then iterate through the linked list and move the slow pointer by one step and the fast pointer by two steps. When the fast pointer reaches the end of the linked list, the slow pointer will be at the middle of the linked list. We can then return the slow pointer as the middle of the linked list. If the linked list has an even number of nodes, we can return the second middle node as the middle of the linked list.