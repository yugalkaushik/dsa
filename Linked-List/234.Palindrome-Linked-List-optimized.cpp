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
    bool isPalindrome(ListNode* head) {
        if(!head || !head->next) return true;
        int size = 0;
        ListNode* temp = head;

        while(temp){
            size++;
            temp = temp->next;
        }

        int mid = size / 2;
        temp = head;
        for(int i=0;i<mid-1;i++){
            temp = temp->next;
        }

        ListNode* l2 = temp->next;
        temp->next = NULL;
        temp = l2;
        ListNode* curr = l2;
        ListNode* prev = NULL;
        while(curr){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        temp = head;
        curr = prev;
        while(temp){
            if(temp->val != curr->val){
                return false;
            }
            temp = temp->next;
            curr = curr->next;
        }
        return true;
    }
};

// tc: O(n) sc: O(1)
// Approach: We can find the middle of the linked list and then reverse the second half of the linked list. After that, we can compare the first half and the second half of the linked list. If they are the same, then we return true, otherwise we return false.