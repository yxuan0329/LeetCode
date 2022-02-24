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
    ListNode *detectCycle(ListNode *head) {
        ListNode *p = head ;
        ListNode *q = head ;
        bool isCycle = false;
        while(p!= NULL && q!=NULL){
            p  = p->next ;
            if (!q->next) return NULL ;
            else q = q->next->next;
            
            if (p == q){
                isCycle = true ;
                break;
            }
        }
        if (!isCycle) return NULL ;
        p = head ;
        while(p!= q){
            p = p->next ;
            q = q->next;
        }
        return p ;
    }
};
	
