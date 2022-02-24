	
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
        ListNode *dummy = new ListNode(-1) ;
        dummy -> next = head;
        ListNode * p = dummy ;
        while(n--){
            head = head->next ;
        }
        while(head!=NULL){
            head = head->next ;
            p = p->next ;
        }
        p->next = p->next->next ;
        return dummy->next ;
    }
};
