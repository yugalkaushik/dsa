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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if (!head || left == right) return head;
        ListNode dummy(0);
        dummy.next = head;

        ListNode* curr = &dummy;
    
        int i = 1;
        
        while(i<left){
            curr = curr->next;
            i++;
        }
        
        ListNode* start = curr;
        ListNode* initial = curr->next;
        curr = curr->next;
        ListNode* prev = NULL;
        
        for(i;i<=right;i++){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        start->next = prev;
        initial->next = curr;
        return dummy.next;
    }
};
// tc: O(n) sc: O(1)
// Approach: We can reverse the linked list from left to right and then return the head of the reversed linked list. We can use three pointers, prev, curr and nextNode to reverse the linked list. We can initialize prev to NULL and curr to head. We can then iterate through the linked list and reverse the linked list by changing the next pointer of each node to point to the previous node. Finally, we can return the head of the reversed linked list which is prev. We can also use a dummy node to handle the edge case when left is 1. We can initialize the dummy node to point to the head of the linked list and then return the next pointer of the dummy node at the end.