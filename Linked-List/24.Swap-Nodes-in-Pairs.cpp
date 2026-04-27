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
    ListNode* swapPairs(ListNode* head) {
        ListNode* left = head;
        while(left!=NULL && left->next!=NULL){
            ListNode* right = left->next;
            int swapval = left->val;
            left->val = right->val;
            right->val = swapval;
            left = right->next;
        }
        return head;
    }
};
// tc: O(n) where n is the number of nodes in the linked list
// sc: O(1)
// Approach: We can use a pointer, left, to traverse the linked list. We start by initializing left to the head of the linked list. We then iterate through the linked list using the left pointer. If left is not NULL and left->next is not NULL, it means we have at least two nodes to swap. We can then store the value of the left node in a temporary variable, swap the values of the left and right nodes, and move the left pointer to the next pair of nodes (i.e., left = right->next). We repeat this process until we have   traversed the entire linked list. Finally, we return the head of the modified linked list.