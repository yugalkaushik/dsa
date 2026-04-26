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
        int length = 0;
        ListNode* temp = head;
        while(temp!=NULL){
            length++;
            temp = temp->next;
        }
        if(n == length){
            ListNode* dnode = head;
            head = head->next;
            delete dnode;
            return head;
        }
        temp = head;
        int position = length - n + 1;
        for(int i = 1;i<position-1;i++){
            temp = temp->next;
        }
        if(temp == NULL || temp->next == NULL) return head;
        ListNode* dnode = temp->next;
        temp->next = dnode->next;
        delete dnode;
        return head;
    }
};

// tc: O(n) where n is the number of nodes in the linked list
// sc: O(1)
// Approach: We can first calculate the length of the linked list. Then we can find the position of the node to be removed from the beginning of the linked list, which is length - n + 1. We can then traverse the linked list again to find the node just before the node to be removed and update its next pointer to skip the node to be removed. Finally, we can delete the node to be removed and return the head of the modified linked list.