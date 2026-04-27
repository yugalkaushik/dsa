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
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        while(curr != NULL){
            if(curr->next != NULL && curr->val == curr->next->val){
                int dupVal = curr->val;
                while(curr != NULL && curr->val == dupVal){
                    ListNode* dnode = curr;
                    curr = dnode->next;
                    delete dnode;
                }
                if (prev != NULL) {
                    prev->next = curr;
                } else {
                    head = curr;
                }
            } else {
                prev = curr;
                curr = curr->next;
            }
        }
        return head;
    }
};

// tc: O(n) where n is the number of nodes in the linked list
// sc: O(1)
// Approach: We can use two pointers, curr and prev, to traverse the linked list. We start by initializing curr to the head of the linked list and prev to NULL. We then iterate through the linked list using the curr pointer. If we find a duplicate value (i.e., curr->val == curr->next->val), we store the duplicate value and continue moving the curr pointer forward until we find a different value. During this process, we delete all the nodes with the duplicate value. After we have removed all the duplicates, we need to update the next pointer of the prev pointer to point to the current node (which is the first node with a different value). If prev is NULL, it means we have removed the head of the linked list, so we update the head to point to the current node. If we do not find a duplicate value, we simply move the prev pointer to the current node and move the curr pointer to the next node. Finally, we return the head of the modified linked list.