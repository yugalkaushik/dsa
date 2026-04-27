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
    ListNode* partition(ListNode* head, int x) {
        ListNode* left = new ListNode(0);
        ListNode* right = new ListNode(0);
        ListNode* ltail = left;
        ListNode* rtail = right;
        while(head){
            if(head->val < x){
                ltail->next = head;
                ltail = ltail->next;
            } else {
                rtail->next = head;
                rtail = rtail->next;
            }
            head = head->next;
        }
        ltail->next = right->next;
        rtail->next = NULL;
        return left->next;
    }
};
// tc: O(n) where n is the number of nodes in the linked list
// sc: O(1)
// Approach: We can use two dummy nodes, left and right, to create two separate linked lists. We also maintain two pointers, ltail and rtail, to keep track of the last nodes in the left and right linked lists, respectively. We start by initializing left and right to new ListNode(0) and ltail and rtail to left and right, respectively. We then iterate through the original linked list using the head pointer. If the value of the current node is less than x, we add it to the left linked list by updating ltail->next to point to the current node and moving ltail to the next node. If the value of the current node is greater than or equal to x, we add it to the right linked list by updating rtail->next to point to the current node and moving rtail to the next node. After we have traversed the entire linked list, we need to connect the left and right linked lists by updating ltail->next to point to right->next (which is the first node of the right linked list) and updating rtail->next to NULL (to terminate the right linked list). Finally, we return left->next, which is the head of the modified linked list.