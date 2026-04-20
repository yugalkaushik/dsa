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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA == NULL || headB == NULL) return NULL;
        ListNode* a = headA;
        ListNode* b = headB;

        while(a != b){
            a = (a==NULL)? headB : a->next;
            b = (b==NULL)? headA : b->next;
        }
        return a;
    }
};

// tc: O(m+n) where m and n are the lengths of the two linked lists
// sc: O(1)
// Approach: We can use two pointers to traverse both linked lists. We start by initializing two pointers, one for each linked list. We then move both pointers forward one step at a time. If one pointer reaches the end of its linked list, we redirect it to the head of the other linked list. If the two linked lists intersect, the pointers will eventually meet at the intersection node. If they do not intersect, both pointers will eventually become NULL, and we can return NULL.