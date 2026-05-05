/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) break;
        }
        if(!fast || !fast->next) return NULL;
        slow = head;
        int position = 0;
        while(slow != fast){
            position++;
            slow = slow->next;
            fast = fast->next;
        }
        return slow;
    }
};
// tc: O(n) sc: O(1)
// Approach: We can use the Floyd's Tortoise and Hare algorithm to find the cycle in the linked list. We can use two pointers, one slow and one fast. The slow pointer will move one step at a time and the fast pointer will move two steps at a time. If there is a cycle in the linked list, then the fast pointer will eventually meet the slow pointer. Once we find the meeting point, we can reset one of the pointers to the head of the linked list and keep the other pointer at the meeting point. We can then move both pointers one step at a time until they meet again. The point at which they meet will be the start of the cycle. If there is no cycle in the linked list, then the fast pointer will eventually reach the end of the linked list and we can return NULL.