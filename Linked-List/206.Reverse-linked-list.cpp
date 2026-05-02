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
    ListNode* reverseList(ListNode* head) {
        ListNode* prev = NULL;
        ListNode* curr = head;
        while(curr){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
};

// tc: O(n) sc: O(1)
// Approach: We can reverse the linked list and then return the head of the reversed linked list. We can use three pointers, prev, curr and nextNode to reverse the linked list. We can initialize prev to NULL and curr to head. We can then iterate through the linked list and reverse the linked list by changing the next pointer of each node to point to the previous node. Finally, we can return the head of the reversed linked list which is prev.