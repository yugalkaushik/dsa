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
    ListNode* rotateRight(ListNode* head, int k) {
        if (!head || !head->next || k == 0) return head;
        ListNode* temp = head;
        int n = 1;
        while(temp->next){
            n++;
            temp = temp->next;
        }
        k = k % n;
        k = n - k;
        temp->next = head;
        ListNode* newTail = temp;
        while(k--){
            newTail = newTail->next;
        }
        ListNode* newHead = newTail->next;
        newTail->next = NULL;
        return newHead;
    }
};
// tc: O(n) where n is the number of nodes in the linked list
// sc: O(1)
// Approach: We can first find the length of the linked list and then calculate the effective number of rotations needed by taking the modulus of k with the length of the linked list. We can then connect the last node of the linked list to the head to form a circular linked list. We can then find the new tail of the linked list by moving k steps from the last node and update the next pointer of the new tail to NULL to break the circular linked list. Finally, we return the new head of the linked list, which is the next node of the new tail. If the linked list is empty or has only one node, or if k is 0, we can simply return the head of the linked list without any modifications.