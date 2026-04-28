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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* pointer1 = l1;
        ListNode* pointer2 = l2;

        ListNode* result = new ListNode(0);
        ListNode* rpointer = result;

        int carry = 0;
        while(pointer1 != NULL || pointer2 != NULL || carry){
            int val = carry;
            if(pointer1 != NULL){
                val += pointer1->val;
                pointer1 = pointer1->next;
            }
            if(pointer2 != NULL){
                val += pointer2->val;
                pointer2 = pointer2->next;
            }
            carry = val/10;
            val = val%10;
            rpointer->next = new ListNode(val);
            rpointer = rpointer->next;
        }
        return result->next;
    }
};
// tc: O(max(m,n)) where m and n are the number of nodes in the linked lists l1 and l2 respectively
// sc: O(max(m,n)) where m and n are the number of nodes in the linked lists l1 and l2 respectively
// Approach: We can use two pointers to traverse both linked lists simultaneously and add the values of the nodes along with any carry from the previous addition. We can create a new linked list to store the result of the addition. We can continue this process until we have traversed both linked lists and there is no carry left. Finally, we can return the next node of the dummy head of the result linked list, which will be the head of the resulting linked list. If one of the linked lists is shorter than the other, we can treat the missing nodes as having a value of 0. If both linked lists are empty, we can simply return a new linked list with a single node having a value of 0.