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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        if(list1 == NULL)
            return list2;
        
        if(list2 == NULL)
            return list1;

        ListNode* head = new ListNode(-1);

        ListNode *p1 = list1, *p2 = list2;

        ListNode* curr = head;

        while(p1 != NULL && p2 != NULL){
            if(p1->val < p2->val){
                curr->next = p1;
                p1 = p1->next;
            }
            else{
                curr->next = p2;
                p2 = p2->next;
            }

            curr = curr->next;
        }

        if(p1 != NULL){
            curr->next = p1;
        }

        else{
            curr->next = p2;
        }

        return head->next;
        
    }
};
